#! /bin/sh
# $FreeBSD: 3c41bb373e7d4c0317eb196da6454f2caf0caafb $

. $(dirname $0)/../../common.sh

# Description
DESC="No Makefile file, no command line target."

# Run
TEST_N=1
TEST_1=

eval_cmd $*
