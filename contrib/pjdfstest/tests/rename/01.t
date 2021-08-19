#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 836b60434eb349e5e73b97caf57b805420479b37 $

desc="rename returns ENAMETOOLONG if a component of either pathname exceeded {NAME_MAX} characters"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..8"

n0=`namegen`
nx=`namegen_max`
nxx="${nx}x"

expect 0 create ${nx} 0644
expect 0 rename ${nx} ${n0}
expect 0 rename ${n0} ${nx}
expect 0 unlink ${nx}

expect 0 create ${n0} 0644
expect ENAMETOOLONG rename ${n0} ${nxx}
expect 0 unlink ${n0}
expect ENAMETOOLONG rename ${nxx} ${n0}
