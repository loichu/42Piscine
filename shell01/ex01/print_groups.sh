#!/usr/bin/env sh
id -Gn $FT_USER | sed $'s/ /,/g' | tr -d '\n'
