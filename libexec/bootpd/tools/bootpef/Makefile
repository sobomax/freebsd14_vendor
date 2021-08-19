# Makefile
# $FreeBSD: 9436561d4a66235ede8feb247631690a24e91379 $

PROG=	bootpef
MAN=	bootpef.8
SRCS=	bootpef.c dovend.c readfile.c hash.c dumptab.c lookup.c \
	hwaddr.c report.c tzone.c rtmsg.c

SRCDIR=	${.CURDIR}/../..
CFLAGS+=-I${SRCDIR}
.PATH:	${SRCDIR}

.include <bsd.prog.mk>
