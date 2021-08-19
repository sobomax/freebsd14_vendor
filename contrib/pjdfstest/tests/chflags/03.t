#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 8389fc12f53f753805c7d4a2026d101bf37f5335 $

desc="chflags returns ENAMETOOLONG if an entire path name exceeded {PATH_MAX} characters"

dir=`dirname $0`
. ${dir}/../misc.sh

require chflags

echo "1..12"

nx=`dirgen_max`
nxx="${nx}x"

mkdir -p "${nx%/*}"

expect 0 create ${nx} 0644
expect 0 chflags ${nx} SF_IMMUTABLE
expect SF_IMMUTABLE stat ${nx} flags
expect 0 chflags ${nx} none
expect 0 unlink ${nx}
expect ENAMETOOLONG chflags ${nxx} SF_IMMUTABLE

expect 0 create ${nx} 0644
expect 0 lchflags ${nx} SF_IMMUTABLE
expect SF_IMMUTABLE stat ${nx} flags
expect 0 lchflags ${nx} none
expect 0 unlink ${nx}
expect ENAMETOOLONG lchflags ${nxx} SF_IMMUTABLE

rm -rf "${nx%%/*}"
