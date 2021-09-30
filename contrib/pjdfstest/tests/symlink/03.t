#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 3982b09dcf4b0515c7cca5d96649ce1e6eb8870e $

desc="symlink returns ENAMETOOLONG if an entire length of either path name exceeded {PATH_MAX} characters"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..6"

n0=`namegen`
nx=`dirgen_max`
nxx="${nx}x"

mkdir -p "${nx%/*}"
expect 0 symlink ${nx} ${n0}
expect 0 unlink ${n0}
expect 0 symlink ${n0} ${nx}
expect 0 unlink ${nx}
expect ENAMETOOLONG symlink ${n0} ${nxx}
expect ENAMETOOLONG symlink ${nxx} ${n0}
rm -rf "${nx%%/*}"
