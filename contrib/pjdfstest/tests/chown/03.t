#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 3cb1ded0081e495e6c86ba7531f7c3653d0c3c0c $

desc="chown returns ENAMETOOLONG if an entire path name exceeded {PATH_MAX} characters"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..10"

nx=`dirgen_max`
nxx="${nx}x"

mkdir -p "${nx%/*}"

expect 0 create ${nx} 0644
expect 0 chown ${nx} 65534 65534
expect 65534,65534 stat ${nx} uid,gid
expect 0 unlink ${nx}
expect ENAMETOOLONG chown ${nxx} 65534 65534

expect 0 create ${nx} 0644
expect 0 lchown ${nx} 65534 65534
expect 65534,65534 stat ${nx} uid,gid
expect 0 unlink ${nx}
expect ENAMETOOLONG lchown ${nxx} 65534 65534

rm -rf "${nx%%/*}"
