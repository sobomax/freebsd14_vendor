# $FreeBSD: 0474b997936334bdbb262afb7a77c5e1af89f770 $

PROG=	ppsapitest
MAN=

WARNS?=	5

.include <bsd.prog.mk>

CFLAGS+=-Wno-format-security

test:	${PROG}
	./${PROG} /dev/cuau0
