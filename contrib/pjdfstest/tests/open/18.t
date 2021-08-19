#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 8fecfdea1e5d1e378020b25b968d95cfee41da73 $

desc="open returns EWOULDBLOCK when O_NONBLOCK and one of O_SHLOCK or O_EXLOCK is specified and the file is locked"

dir=`dirname $0`
. ${dir}/../misc.sh

[ "${os}" = "FreeBSD" ] || quick_exit

echo "1..6"

n0=`namegen`

expect 0 create ${n0} 0644
expect 0 open ${n0} O_RDONLY,O_SHLOCK : open ${n0} O_RDONLY,O_SHLOCK,O_NONBLOCK
expect "EWOULDBLOCK|EAGAIN" open ${n0} O_RDONLY,O_EXLOCK : open ${n0} O_RDONLY,O_EXLOCK,O_NONBLOCK
expect "EWOULDBLOCK|EAGAIN" open ${n0} O_RDONLY,O_SHLOCK : open ${n0} O_RDONLY,O_EXLOCK,O_NONBLOCK
expect "EWOULDBLOCK|EAGAIN" open ${n0} O_RDONLY,O_EXLOCK : open ${n0} O_RDONLY,O_SHLOCK,O_NONBLOCK
expect 0 unlink ${n0}
