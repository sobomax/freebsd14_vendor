#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: edc13bda03c64009d613fc3e550a1672c7590012 $

desc="symlink returns ELOOP if too many symbolic links were encountered in translating the name2 path name"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..6"

n0=`namegen`
n1=`namegen`

expect 0 symlink ${n0} ${n1}
expect 0 symlink ${n1} ${n0}
expect ELOOP symlink test ${n0}/test
expect ELOOP symlink test ${n1}/test
expect 0 unlink ${n0}
expect 0 unlink ${n1}
