#!/bin/sh
# $FreeBSD: f6c7ce00d3362cf4f8f5314d2140447d9220d085 $

. ../Funcs.sh

parse_options $*

DATA=$LOCALBASE/share/atmsupport/testsuite_cc

$LOCALBASE/bin/ats_cc $options $DATA/CC_Funcs $DATA/CC_??_??
