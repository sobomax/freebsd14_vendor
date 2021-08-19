# $FreeBSD: c8378dc97a41cfe8bb70bbed5bdba1c29500d756 $

.PATH: ${.CURDIR:H}/common_source

PROG=	chkprintcap
MAN=	chkprintcap.8
SRCS=	chkprintcap.c skimprintcap.c

CFLAGS+= -I${.CURDIR:H}/common_source

LIBADD=	lpr

.include <bsd.prog.mk>
