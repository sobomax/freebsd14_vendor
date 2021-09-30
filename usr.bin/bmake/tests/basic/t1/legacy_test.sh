#! /bin/sh
# $FreeBSD: b07f927a57cd082f4a3e732a5b2d50320ff23caf $

. $(dirname $0)/../../common.sh

# Description
DESC="A Makefile file with only a 'all:' file dependency specification."

# Run
TEST_N=1
TEST_1=

eval_cmd $*
