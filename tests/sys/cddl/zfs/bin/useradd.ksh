#! /usr/local/bin/ksh93 -p

# $FreeBSD: fc6b177b3a598e9d387f34276a93815b22292e96 $

a=
g=
for i in $*
do
	a="$a $g"
	g=$i
done
	
/usr/sbin/pw useradd $g $a
