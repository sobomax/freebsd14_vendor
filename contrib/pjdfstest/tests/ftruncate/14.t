#!/bin/sh
# vim: filetype=sh noexpandtab ts=8 sw=8
# $FreeBSD: a6d4ed55767c45a7a99a4c245fa6820d7772b7d6 $

desc="truncate returns EFAULT if the path argument points outside the process's allocated address space"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..2"

expect EFAULT truncate NULL 123
expect EFAULT truncate DEADCODE 123
