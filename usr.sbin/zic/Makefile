# $FreeBSD: 88d3f12c30160795a1a67b0f116a584529348a95 $

.PATH: ${SRCTOP}/contrib/tzcode

PROG=	zic
MAN=	zic.8
SRCS=	zic.c

CFLAGS+= -I${SRCTOP}/contrib/tzcode -include tzconfig.h

.include <bsd.prog.mk>
