#!/bin/sh
# $FreeBSD: 1cb785e5113fd212dd0087e7d8b57cf90ee8d5d2 $

name="$(mktemp -u mirror.XXXXXX)"
class="mirror"
base=`basename $0`

gmirror_test_cleanup()
{
	[ -c /dev/$class/$name ] && gmirror destroy $name
	geom_test_cleanup
}
trap gmirror_test_cleanup ABRT EXIT INT TERM

syncwait()
{
	while $(gmirror status -s $name | grep -q SYNCHRONIZING); do
		sleep 0.1;
	done
}

. `dirname $0`/../geom_subr.sh
