#!/bin/sh
# $FreeBSD: 8750908dbb2c63abbc7b38ff76926c6a33ab07d5 $
#
# This sample installs a short list of packages from the main HTTP site.
#
[ "$_SCRIPT_SUBR" ] || . /usr/share/bsdconfig/script.subr || exit 1
nonInteractive=1
_httpPath=http://pkg.freebsd.org
mediaSetHTTP
mediaOpen
for package in wget bash rsync; do
	packageAdd
done
