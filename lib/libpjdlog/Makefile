#
# $FreeBSD: 4fcfe028d9f75a189a85468a49b35e1779927ab9 $
#

PACKAGE=lib${LIB}
SHLIBDIR?=	/lib

.include <bsd.own.mk>

LIB=		pjdlog
SRCS=		pjdlog.c

SHLIB_MAJOR=	0

CFLAGS+=-I${.CURDIR}

LIBADD=	util

.include <bsd.lib.mk>
