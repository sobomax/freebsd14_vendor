#! /bin/sh
# $FreeBSD: 880ca780d53b907a8a06711485572fa86e63ad37 $

. $(dirname $0)/../../common.sh

# Description
DESC="Check that the shell can be replaced."

# Setup
TEST_COPY_FILES="shell 755"

# Run
TEST_N=2
TEST_1=
TEST_2=-j2

eval_cmd $*
