#! /bin/sh
# $FreeBSD: da4c60a168c5bd7dc9cd6e57ba7e2dca4c2179b9 $

. $(dirname $0)/../../common.sh

# Description
DESC="A Makefile file with only a 'all:' file dependency specification, and shell command."

# Run
TEST_N=1
TEST_1=

eval_cmd $*
