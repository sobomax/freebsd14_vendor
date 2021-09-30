#!/bin/sh
# $FreeBSD: 60812deeb6edb3120adbcfbddffc6855b9eb1c3b $

. ../Funcs.sh

parse_options $*

DATA=$LOCALBASE/share/atmsupport/testsuite_sscop

$LOCALBASE/bin/ats_sscop $options $DATA/Funcs $DATA/S*
