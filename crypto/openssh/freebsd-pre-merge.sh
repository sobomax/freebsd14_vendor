#!/bin/sh
#
# $FreeBSD: 473474c2c4dab98a88d76698c5344747ca0a780b $
#

:>keywords
:>rcsid
svn list -R | grep -v '/$' | \
while read f ; do
	svn proplist -v $f | grep -q 'FreeBSD=%H' || continue
	egrep -l '^(#|\.\\"|/\*)[[:space:]]+\$FreeBSD[:\$]' $f >>keywords
	egrep -l '__RCSID\("\$FreeBSD[:\$]' $f >>rcsid
done
sort -u keywords rcsid | xargs perl -n -i -e '
	$strip = $ARGV if /\$(Id|OpenBSD):.*\$/;
	print unless (($strip eq $ARGV || /__RCSID/) && /\$FreeBSD[:\$]/);
'
