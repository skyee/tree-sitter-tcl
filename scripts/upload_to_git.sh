#!/usr/bin/env bash
# NOTE: This script is meant to be run from the .build.yml file. It requires to
# be run from the root of the repository and to have tree-sitter-tcl-pregen
# directory in the same directory as tree-sitter-tcl.
set -euxo pipefail

commit_num=$(hg identify --num)
commit_id=$(hg identify --id)
revision="r.$commit_num.$commit_id"
message=$(
	cat <<-EOF
		Add revision $revision

		See: https://hg.sr.ht/~cdrozak/tree-sitter-tcl/rev/$revision
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
git add .
git commit --message "$message"
git push
