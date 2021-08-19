#! /usr/local/bin/ksh93 -p

# $FreeBSD: 16f01f48bd88b9f82cc87eb4dbffa71c67c03b53 $

a=
g=
for i in $*
do
	a="$a $g"
	g=$i
done
	
/usr/sbin/pw groupdel $a $g
