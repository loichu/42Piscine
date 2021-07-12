#!/usr/bin/env sh
#ifconfig | grep "ether " | cut -d" " -f2
ifconfig | grep "ether " | awk '{print $2}'
