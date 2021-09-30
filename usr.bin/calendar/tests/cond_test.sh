#!/bin/sh
# $FreeBSD: f00509f3a27c997b928587993c79f9b9897bbadf $

SRCDIR="$(dirname "${0}")"; export SRCDIR

m4 "${SRCDIR}/../regress.m4" "${SRCDIR}/cond.sh" | sh
