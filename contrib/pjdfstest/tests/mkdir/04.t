#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: da8fbaaee07a24b9f529ec0fbf4c2d068259d898 $

desc="mkdir returns ENOENT if a component of the path prefix does not exist"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..3"

n0=`namegen`
n1=`namegen`

expect 0 mkdir ${n0} 0755
expect ENOENT mkdir ${n0}/${n1}/test 0755
expect 0 rmdir ${n0}
