#! /usr/local/bin/ksh93 -p

# $FreeBSD: 9ea56d6a0411e63f2240f8fa46b11f76ae61a692 $

a=
g=
for i in $*
do
	a="$a $g"
	g=$i
done
	
/usr/sbin/pw userdel $g $a
