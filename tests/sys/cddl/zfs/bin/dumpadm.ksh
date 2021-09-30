#! /usr/local/bin/ksh93 -p

# $FreeBSD: a96a71d793108334da26c2144d70a6cc38298113 $

if [ $# != 0 ]
then
	echo "ERROR option not supported"
	return 1
fi
grep dumpdev /etc/rc.conf
