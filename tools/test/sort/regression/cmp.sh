#!/bin/sh
# $FreeBSD: 44c406a3dc6500447e122414a21358256f0c6c58 $

diff $1 $2 | grep '^-' >/dev/null && echo DIFFER: $1 $2 && exit 0 || exit 0
