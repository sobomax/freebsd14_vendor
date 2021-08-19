# $FreeBSD: a79ae2f7341723fc7a01aa0b5ddbb7e965ab0749 $

.PATH:	${.CURDIR:H}/mount

PACKAGE=runtime
PROG=	mksnap_ffs
SRCS=	mksnap_ffs.c getmntopts.c
MAN=	mksnap_ffs.8

WARNS?=	2
CFLAGS+=-I${.CURDIR:H}/mount

.if defined(NOSUID)
BINMODE=554
.else
BINMODE=4554
BINOWN=	root
.endif
BINGRP=	operator

.include <bsd.prog.mk>
