#!/bin/sh
#
# $FreeBSD: f98e71822a0ce2acb32a8fd5ceec563c698e1964 $
#

:>keywords
:>rcsid
git ls-files | \
while read f ; do
	egrep -l '^(#|\.\\"|/\*)[[:space:]]+\$FreeBSD[:\$]' $f >>keywords
	egrep -l '__RCSID\("\$FreeBSD[:\$]' $f >>rcsid
done
sort -u keywords rcsid | xargs perl -n -i -e '
	$strip = $ARGV if /\$(Id|OpenBSD):.*\$/;
	print unless (($strip eq $ARGV || /__RCSID/) && /\$FreeBSD[:\$]/);
'
