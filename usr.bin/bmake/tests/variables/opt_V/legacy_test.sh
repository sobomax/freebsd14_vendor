#! /bin/sh
# $FreeBSD: 4b1122acac8353edf56980daf038ffb422b67ae6 $

. $(dirname $0)/../../common.sh

# Description
DESC="Variable expansion using command line '-V'"

# Run
TEST_N=2

eval_cmd $*
