# $FreeBSD: 13fb7c2fcf43441a7f639c29bffafed49ea8950c $

.PATH: ${.CURDIR:H}/shared

PROG=	ggatel
MAN=	ggatel.8
SRCS=	ggatel.c ggate.c
PACKAGE=	ggate

CFLAGS+= -DLIBGEOM
CFLAGS+= -I${.CURDIR:H}/shared

LIBADD=	geom util

.include <bsd.prog.mk>
