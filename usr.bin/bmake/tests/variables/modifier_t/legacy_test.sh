#! /bin/sh
# $FreeBSD: 7f145718b6d2b9eb284c6832fac5ff5fbc1328ee $

. $(dirname $0)/../../common.sh

# Description
DESC="Variable expansion with t modifiers"

# Run
TEST_N=3

eval_cmd $*
