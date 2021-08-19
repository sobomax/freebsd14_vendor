# $FreeBSD: d8203c5a4df719e21e820423dee26fabe626a47a $

LIB=	cron
INTERNALLIB=
SRCS= entry.c env.c misc.c

WARNS?=	3

CFLAGS+= -I${.CURDIR:H}/cron
CFLAGS+= -DLOGIN_CAP -DPAM

.include <bsd.lib.mk>
