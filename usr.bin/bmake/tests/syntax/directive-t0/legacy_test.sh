#! /bin/sh
# $FreeBSD: 451c8764c252e2df72c54d0df7a950a0ee0a9923 $

. $(dirname $0)/../../common.sh

# Description
DESC="A typo'ed directive."

# Run
TEST_N=1
TEST_1=

eval_cmd $*
