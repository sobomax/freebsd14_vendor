#! /bin/sh
# $FreeBSD: 307c1f02d2f0b85740890aa8dcb7444a5373a06a $

. $(dirname $0)/../../common.sh

# Description
DESC="Test escaped new-lines handling."

# Run
TEST_N=5
TEST_2_TODO="bug in parser"

eval_cmd $*
