#! /bin/sh
# $FreeBSD: e9cd31701ecd134b13e8cf3948bfa35318356f39 $

. $(dirname $0)/../../common.sh

# Description
DESC='Target names with "funny" embeded characters.'

# Run
TEST_N=2

eval_cmd $*
