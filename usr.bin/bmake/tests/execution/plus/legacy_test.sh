#! /bin/sh
# $FreeBSD: 0737d1bc86b547561434e7a006d18e2eb86e9d46 $

. $(dirname $0)/../../common.sh

# Description
DESC="Test '+command' execution with -n -jX"

# Run
TEST_N=1
TEST_1=

eval_cmd $*
