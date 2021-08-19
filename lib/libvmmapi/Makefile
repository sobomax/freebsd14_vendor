# $FreeBSD: bf17566a0d7d70c478249f39589d8acbe9da9663 $

PACKAGE=lib${LIB}
LIB=	vmmapi
SRCS=	vmmapi.c vmmapi_freebsd.c
INCS=	vmmapi.h

WARNS?=	2

LIBADD=	util

CFLAGS+= -I${.CURDIR}

.include <bsd.lib.mk>
