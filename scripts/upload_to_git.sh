#!/usr/bin/env bash
# NOTE: This script is meant to be run from the .build.yml file. It requires to
# be run from the root of the repository and to have tree-sitter-tcl-pregen
# directory in the same directory as tree-sitter-tcl.
set -euxo pipefail

# Generate revision number based on:
# https://wiki.archlinux.org/title/VCS_package_guidelines#The_pkgver()_function
commit_num=$(hg identify --num)
commit_id=$(hg identify --id)
revision="r.$commit_num.$commit_id"

message=$(
	cat <<-EOF
		Add revision $revision

		See: https://hg.sr.ht/~cdrozak/tree-sitter-tcl/rev/$commit_id
	EOF
)

cp -rf \
	Cargo.{lock,toml} \
	binding.gyp \
	bindings \
	package-lock.json \
	package.json \
	tcl{,sh}/{package.json,src} \
	tclsh/queries \
	../tree-sitter-tcl-pregen

cd ../tree-sitter-tcl-pregen

export GIT_SSH_COMMAND='ssh -o StrictHostKeyChecking=no'
git commit --all --message "$message"
git push
