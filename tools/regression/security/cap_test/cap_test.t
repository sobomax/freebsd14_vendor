#!/bin/sh
#
# $FreeBSD: 8185161f702a4685d463457928c39ef3a14f5ae5 $
#

if test -z "${DIR}" ; then DIR=$( make -V .OBJDIR ); fi
if test -z "${DIR}" ; then DIR=$( dirname $0 ); fi

make > /dev/null || exit 1
$DIR/cap_test $*

