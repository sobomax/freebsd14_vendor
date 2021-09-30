#! /usr/local/bin/ksh93 -p

# $FreeBSD: 37c51519676ed3389006b553d57b91b65e9458c6 $

a=
g=
for i in $*
do
	a="$a $g"
	g=$i
done
	
/usr/sbin/pw usermod $g $a
