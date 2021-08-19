# $FreeBSD: 8e32b7f79916ed3f1ffa55fbec554d05cce33a86 $

PROG=	colldef
SRCS=	parse.y scan.l y.tab.h
LFLAGS=	-8 -i
CFLAGS+=-I. -I${.CURDIR}
CFLAGS+=-DCOLLATE_DEBUG -DYY_NO_UNPUT -DYY_NO_INPUT
LIBADD=	l

WARNS?=	2

.include <bsd.prog.mk>
