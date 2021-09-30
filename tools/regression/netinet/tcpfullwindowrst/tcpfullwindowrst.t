#!/bin/sh
#
# $FreeBSD: 49acbccf6e80832a32a8c9ab5ab2f4aa2e801e6a $

make tcpfullwindowrsttest 2>&1 > /dev/null

./tcpfullwindowrsttest
