#! /bin/sh
# $FreeBSD: 9e9cd01ff297585dc2206433b1a5e2a3263cf007 $

. $(dirname $0)/../../common.sh

# Description
DESC="Ellipsis command from variable"

# Run
TEST_N=1
TEST_1=

eval_cmd $*
