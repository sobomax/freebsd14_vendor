#!/usr/local/bin/ksh93

# $FreeBSD: e544fb078bb28605aef50f4e54e96d76cc90ab35 $

BSDDEVS="ad|da|mlxd|myld|aacd|ided|twed"
ls /dev|egrep "^($BSDDEVS)[0-9]+\$" |sed 's/^/\/dev\//'
