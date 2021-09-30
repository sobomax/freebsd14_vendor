#!/bin/sh
#
# $FreeBSD: b9e4cbddc7e8c18c846bc86e7e9b61e6208d7031 $
#

xargs perl -n -i -e '
	print;
	s/\$(Id|OpenBSD): [^\$]*/\$FreeBSD/ && print;
' <keywords

xargs perl -n -i -e '
	print;
	m/^\#include "includes.h"/ && print "__RCSID(\"\$FreeBSD\$\");\n";
' <rcsid
