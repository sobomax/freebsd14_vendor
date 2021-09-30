#! /bin/sh
# $FreeBSD: 3446bf0f7ab1d55877005af59d69c4c4fdf41259 $

. $(dirname $0)/../../common.sh

# Description
DESC="Basic suffix operation."

# Setup
TEST_COPY_FILES="TEST1.a 644"

# Reset
TEST_CLEAN="Test1.b"

# Run
TEST_N=1
TEST_1="-r test1"

eval_cmd $*
