#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 6e7f8207a1d4b898b2df49faf774db7b6afb29dc $

desc="chown returns EFAULT if the path argument points outside the process's allocated address space"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..4"

expect EFAULT chown NULL 65534 65534
expect EFAULT chown DEADCODE 65534 65534
expect EFAULT lchown NULL 65534 65534
expect EFAULT lchown DEADCODE 65534 65534
