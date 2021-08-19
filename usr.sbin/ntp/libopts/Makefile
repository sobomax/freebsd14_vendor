# $FreeBSD: 7c10182cbaec0a38a2e9b31fa24edbc68e628303 $

.PATH: ${SRCTOP}/contrib/ntp/sntp/libopts

LIB=	opts
INTERNALLIB=

SRCS=	libopts.c

CFLAGS+= -I${SRCTOP}/contrib/ntp/include \
	-I${SRCTOP}/contrib/ntp/sntp/libopts \
	-I${.CURDIR:H}

.include <bsd.lib.mk>
