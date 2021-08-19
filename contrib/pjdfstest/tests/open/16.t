#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 0c61a840ae0040309407cb42a819c044dccece06 $

dir=`dirname $0`
. ${dir}/../misc.sh

case "${os}" in
Darwin|Linux)
	error=ELOOP
	;;
*)
	error=EMLINK
	;;
esac
desc="open returns $error when O_NOFOLLOW was specified and the target is a symbolic link"

echo "1..6"

n0=`namegen`
n1=`namegen`

expect 0 symlink ${n0} ${n1}
expect $error open ${n1} O_RDONLY,O_CREAT,O_NOFOLLOW 0644
expect $error open ${n1} O_RDONLY,O_NOFOLLOW
expect $error open ${n1} O_WRONLY,O_NOFOLLOW
expect $error open ${n1} O_RDWR,O_NOFOLLOW
expect 0 unlink ${n1}
