#!/bin/sh
#
# $FreeBSD: f2e035c2d7e250c05ff76b1a15995867e6283b93 $
#

export LESSOPEN="||/usr/bin/lesspipe.sh %s"
exec /usr/bin/less "$@"
