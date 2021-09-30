# $FreeBSD: c8cf4bde7ba810d65cb0af0b9d294693061493db $

.include <src.opts.mk>

LIBXOSRC=	${SRCTOP}/contrib/libxo

.PATH:
.PATH:	${LIBXOSRC}/xopo

PROG=	xopo
MAN=	xopo.1

# XXX For xoversion.h
CFLAGS+=-I${LIBXOSRC}/libxo

# XXX For xo_config.h
CFLAGS+=-I${SRCTOP}/lib/libxo

LIBADD=	xo util

.include <bsd.prog.mk>
