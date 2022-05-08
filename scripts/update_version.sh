#!/usr/bin/env bash
set -euo pipefail

program=$0

usage() {
	cat <<-EOF
		$program <version>
		Update version in all places and create a Mercurial tag
	EOF
}

if [ $# -ne 1 ]; then
	{
		echo 'Wrong number of arguments'
		usage
	} >&2
	exit 1
fi

version=$1

# If the first parameter starts from "v", remove it. It will be prepended in
# later commands, where needed.
if [ "${version:0:1}" = 'v' ]; then
	version=${version:1}
fi

# Update NPM version. NPM prints the new version to standard output, but we
# don't need it, so it's yeeted into The Void.
npm version "$version" >/dev/null

# Update the Rust crate version. Build the package afterwards, so that
# Cargo.lock gets updated too.
sed -Ei "s/version\s*=\s*\".+\"/version = \"$version\"/" Cargo.toml
cargo build

# Now, all is left to do, is to create a commit and a tag!
hg commit package{,-lock}.json Cargo.{toml,lock} --message "Bump version to $version"
hg tag --edit "v$version"
