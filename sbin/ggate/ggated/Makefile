# $FreeBSD: 1c53cf2c2efb047aed8a73742b97ec71826d7b06 $

.PATH: ${.CURDIR:H}/shared

PROG=	ggated
MAN=	ggated.8
SRCS=	ggated.c ggate.c
PACKAGE=	ggate

LIBADD=	pthread util

CFLAGS+= -I${.CURDIR:H}/shared

.include <bsd.prog.mk>
