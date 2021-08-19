#! /bin/sh
# $FreeBSD: d23418afc13209c21c71b5bb3d9043161bb66c1c $

. $(dirname $0)/../../common.sh

# Description
DESC="An empty Makefile file and no target given."

# Setup
TEST_TOUCH="Makefile ''"

# Run
TEST_N=1
TEST_1=

eval_cmd $*
