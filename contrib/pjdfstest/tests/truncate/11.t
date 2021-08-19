#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 13990168ada3b6d047f01299937fd5ba02e1f70c $

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
while ! pkill -0 -f ./${n0}; do
	sleep 0.1
done
expect ETXTBSY truncate ${n0} 123
pkill -9 -f ./${n0}
expect 0 unlink ${n0}
