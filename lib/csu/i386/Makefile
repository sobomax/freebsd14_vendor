# $FreeBSD: cfa7b4d5b39950df22011115d3002f7110cbd4cc $

.PATH: ${.CURDIR:H}/common

CFLAGS+=	-I${.CURDIR}
CFLAGS+=	-DCRT_IRELOC_REL

CRT1OBJS+=	crt1_s.o

.include <bsd.lib.mk>
