#! /usr/local/bin/ksh93 -p

# $FreeBSD: 9c1ea72647ba093d0ae22e810b14c2bf12c50546 $

a=
g=
for i in $*
do
	a="$a $g"
	g=$i
done
	
/usr/sbin/pw groupmod $g $a
