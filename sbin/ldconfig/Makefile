# $FreeBSD: 8360a3f6648e25f74d3db530a7e31c7dedd3077a $

PACKAGE=runtime
PROG=	ldconfig
SRCS=	elfhints.c ldconfig.c shlib.c support.c
LDDIR?= ${SRCTOP}/libexec/rtld-aout
CFLAGS+=-I${LDDIR} -DFREEBSD_AOUT
MAN=	ldconfig.8

.PATH: ${LDDIR}

.include <bsd.prog.mk>
