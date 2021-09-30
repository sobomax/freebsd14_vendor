#!/bin/sh
# $FreeBSD: 349c08f6e038a166ff0873aa81456673b58cbe72 $

diff -I\$\FreeBSD $1 $2 | grep '^-' >/dev/null && printf "\tDIFFER: $1 $2\n" && exit 0 || exit 0
