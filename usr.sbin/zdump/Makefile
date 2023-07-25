# $FreeBSD: cbf7c5c566c8d0cd4aa2b84f1d4ce665a62b668b $

.PATH: ${SRCTOP}/contrib/tzcode

PROG=	zdump
MAN=	zdump.8
SRCS=	zdump.c

CFLAGS+= -I${SRCTOP}/contrib/tzcode -include tzconfig.h

.include <bsd.prog.mk>
