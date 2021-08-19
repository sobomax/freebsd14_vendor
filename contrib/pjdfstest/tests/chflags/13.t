#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 5605414156ec4237736fc2e1769b5ae39cac496b $

desc="chflags returns EFAULT if the path argument points outside the process's allocated address space"

dir=`dirname $0`
. ${dir}/../misc.sh

require chflags

echo "1..2"

expect EFAULT chflags NULL UF_NODUMP
expect EFAULT chflags DEADCODE UF_NODUMP
