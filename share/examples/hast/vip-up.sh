#!/bin/sh
# $FreeBSD: 61dabe9c3daad696bf9cf83106731a5bf4b0c4a9 $

set -m
/root/hast/sbin/hastd/ucarp_up.sh &
set +m
exit 0
