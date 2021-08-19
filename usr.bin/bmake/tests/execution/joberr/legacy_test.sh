#! /bin/sh
# $FreeBSD: 429bfe1d661cf45fa504557001c132588f35e6ce $

. $(dirname $0)/../../common.sh

# Description
DESC="Test job make error output"

# Run
TEST_N=1
TEST_1=

eval_cmd $*
