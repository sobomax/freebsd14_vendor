# $FreeBSD: 2987c1c89b1fb97cf8282352f90d5911bc68e421 $

.include <bsd.own.mk>

# Use our headers in preference to ones from ../cc_tools.
CFLAGS+=	-I${.CURDIR} -I.

.include "../Makefile.inc"

.PATH: ${GCCLIB}/libdecnumber

LIB=	decnumber
SRCS=	decNumber.c decContext.c decUtility.c \
        decimal32.c decimal64.c decimal128.c

INTERNALLIB=
WARNS?=	1

.include <bsd.lib.mk>
