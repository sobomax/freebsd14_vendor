# $FreeBSD: 7b780edc80e3737fdd1e67e738978c2e2b8d1ae8 $

BINDIR=	/usr/bin

PROG=	crontab
MAN=	crontab.1 crontab.5
BINOWN=	root
BINMODE=4555
PRECIOUSPROG=

WARNS?=	3

CFLAGS+= -I${.CURDIR:H}/cron

LIBADD=	cron md util

.include <bsd.prog.mk>
