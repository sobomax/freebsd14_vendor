#! /bin/sh
# $FreeBSD: 2604c9642b000dd72160d300165c37d4e331c40e $

. $(dirname $0)/../../common.sh

# Description
DESC="Archive parsing (BSD4.4 format)."

# Setup
TEST_COPY_FILES="libtest.a 644"

# Run
TEST_N=7

eval_cmd $*
