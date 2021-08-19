#	From: @(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: a25bb87f2f446deae3275d87f1bac1fe8f696703 $

.PATH: ${.CURDIR:H}/common_source

BINDIR=	/usr/bin

PROG=	lpr
MAN=	lpr.1 printcap.5
BINOWN=	root
BINGRP=	daemon
BINMODE= 6555

CFLAGS+= -I${.CURDIR:H}/common_source

WARNS?=	2

LIBADD=	lpr

.include <bsd.prog.mk>
