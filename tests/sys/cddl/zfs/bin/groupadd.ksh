#! /usr/local/bin/ksh93 -p

# $FreeBSD: a4e13a1944467a40274aecd8ed455735c7649e1f $

a=
g=
for i in $*
do
	a="$a $g"
	g=$i
done
	
/usr/sbin/pw groupadd $g $a
