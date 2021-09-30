#!/bin/sh
# $FreeBSD: 1b6b806c598027a1c165323fb7df9107247c1885 $

SRCDIR="$(dirname "${0}")"; export SRCDIR

m4 "${SRCDIR}/../regress.m4" "${SRCDIR}/regress.sh" | sh
