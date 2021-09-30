# $FreeBSD: 564e8dfbf288078ba5ffccc5d7ff8d82935bfbc4 $

.PATH: ${.CURDIR:H}/common

OBJS+=		crtsavres.o
CFLAGS+=	-I${.CURDIR} \
		-mlongcall -DCRT_IRELOC_RELA

CLEANFILES+=	crtsavres.S

# On powerpc64 crtsavres is an empty file
crtsavres.S:
	touch ${.TARGET}

.include <bsd.lib.mk>
