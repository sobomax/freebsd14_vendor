#! /bin/sh
# $FreeBSD: 092635a8495781ae7c3c285b54c63badcbb24d81 $

. $(dirname $0)/../../common.sh

# Description
DESC="Test semicolon handling."

# Run
TEST_N=2
TEST_1_TODO="parser bug"

eval_cmd $*
