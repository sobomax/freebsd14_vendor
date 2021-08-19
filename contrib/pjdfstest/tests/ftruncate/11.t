#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 32c2138bc823bbc47c8a8ea3d95cc25fd5532f8e $

desc="truncate returns ETXTBSY the file is a pure procedure (shared text) file that is being executed"

dir=`dirname $0`
. ${dir}/../misc.sh

[ "${os}" = "FreeBSD" ] || quick_exit
noexec && quick_exit

requires_exec

echo "1..2"

n0=`namegen`

cp -pf `which sleep` ${n0}
./${n0} 3 &
expect ETXTBSY truncate ${n0} 123
expect 0 unlink ${n0}
