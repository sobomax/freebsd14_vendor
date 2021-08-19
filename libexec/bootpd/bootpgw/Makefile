# Makefile
# $FreeBSD: b7adadf3d5149bd599f575e85cf51c94ddca4d82 $

PROG=	bootpgw
MAN=
SRCS=	bootpgw.c getif.c hwaddr.c report.c rtmsg.c

SRCDIR=	${.CURDIR}/..
CFLAGS+=-I${SRCDIR}
.PATH:	${SRCDIR}

.include <bsd.prog.mk>
