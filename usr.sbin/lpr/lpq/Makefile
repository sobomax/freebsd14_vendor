#	From: @(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 3ce7182480f0ba816cf41fabbe60fcf65a366c37 $

BINDIR=	/usr/bin

PROG=	lpq
BINOWN=	root
BINGRP=	daemon
BINMODE= 6555

CFLAGS+= -I${.CURDIR:H}/common_source

LIBADD=	lpr

.include <bsd.prog.mk>
