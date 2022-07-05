# $FreeBSD: e4c9029fcacc18be3d19c88b858100c877dc895b $

.PATH: ${.CURDIR:H}/common

CFLAGS+=	-I${.CURDIR}
CFLAGS+=	-DCRT_IRELOC_RELA

CRT1OBJS+=	crt1_s.o

.include <bsd.lib.mk>
