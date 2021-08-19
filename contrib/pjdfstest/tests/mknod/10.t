#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: 16d6071a61385152101292fe91dede3a25164e83 $

desc="mknod returns EFAULT if the path argument points outside the process's allocated address space"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..2"

expect EFAULT mknod NULL f 0644 0 0
expect EFAULT mknod DEADCODE f 0644 0 0
