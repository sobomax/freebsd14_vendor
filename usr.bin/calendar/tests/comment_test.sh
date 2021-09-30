#!/bin/sh
# $FreeBSD: c44fe63c9aed51daec538b1410c4c9151637fd31 $

SRCDIR="$(dirname "${0}")"; export SRCDIR

m4 "${SRCDIR}/../regress.m4" "${SRCDIR}/comment.sh" | sh
