# $FreeBSD: 53690a39805ff61d4c4b7e659b9e0f3cfdc26a32 $

.PATH:	${.CURDIR:H}/mount

PACKAGE=ufs
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
