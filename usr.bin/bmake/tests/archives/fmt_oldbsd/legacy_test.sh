#! /bin/sh
# $FreeBSD: c7980c54dc3919ac260dfedfce07e534c127c8f1 $

. $(dirname $0)/../../common.sh

# Description
DESC="Archive parsing (old BSD format)."

# Setup
TEST_COPY_FILES="libtest.a 644"

# Run
TEST_N=7

eval_cmd $*
