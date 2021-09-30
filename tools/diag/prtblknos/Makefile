# $FreeBSD: a813bb6a2fd07c1c38f750552cc5d7552cc13263 $

BINDIR?=	/usr/bin

PROG=	prtblknos
MAN=

SRCS=	main.c prtblknos.c

LIBADD+=ufs

WARNS?=	3

test:	${PROG}
	./${PROG} > a

.include <bsd.prog.mk>
