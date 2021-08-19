#!/usr/bin/env ksh93
script=$(realpath $0)
export STF_BIN=$(dirname ${script})
export STF_SUITE=$(dirname ${STF_BIN})

# $FreeBSD: 9daa985475a7dc78107e2a3a34f46805e9124595 $

env ENV=${STF_SUITE}/include/testenv.kshlib ksh93 -E -l
