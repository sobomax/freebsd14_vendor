# $FreeBSD: be28debc70bca1cad784cb671fdd6a3600c06612 $

PACKAGE=	dpv
LIB=		dpv
SHLIB_MAJOR=	2
INCS=		dpv.h
MAN=		dpv.3
MLINKS=		dpv.3 dpv_free.3

LIBADD=	dialog figpar util ncursesw

SRCS=		dialog_util.c dialogrc.c dprompt.c dpv.c status.c util.c

CFLAGS+=	-I${.CURDIR}

.include <bsd.lib.mk>
