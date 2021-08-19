#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 97a27aec547932d2503b4f3a81dc65ceaa1a44b9 $

desc="truncate returns EINVAL if the length argument was less than 0"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..4"

n0=`namegen`

expect 0 create ${n0} 0644
expect EINVAL -- truncate ${n0} -1
expect EINVAL -- truncate ${n0} -999999
expect 0 unlink ${n0}
