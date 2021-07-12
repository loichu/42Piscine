#!/usr/bin/env sh
#find . | git check-ignore --stdin | sed "s/\.\///"
git ls-files --others --ignored --exclude-standard
