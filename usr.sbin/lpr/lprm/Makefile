#	From: @(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 8e882c3f8c1ba5b6b5c0d887a665a9a8db76da53 $

.PATH: ${.CURDIR:H}/common_source

BINDIR=	/usr/bin

PROG=	lprm
BINOWN=	root
BINGRP=	daemon
BINMODE= 6555

CFLAGS+= -I${.CURDIR:H}/common_source

LIBADD=	lpr

.include <bsd.prog.mk>
