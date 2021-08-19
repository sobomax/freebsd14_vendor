#! /bin/sh
# $FreeBSD: e02d175b057dcd23588badaea6c0299f4d2374c1 $

. $(dirname $0)/../../common.sh

# Description
DESC="Empty command (from variable)"

# Run
TEST_N=1
TEST_1=

eval_cmd $*
