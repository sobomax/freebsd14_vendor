# $FreeBSD: 5cc36ab95dd95c5a97aa52ad98463172f375acb2 $

.include <src.opts.mk>

LIBXOSRC=	${SRCTOP}/contrib/libxo

.PATH:
.PATH:	${LIBXOSRC}/xo

PROG=	xo
MAN=	xo.1

# XXX For xoversion.h
CFLAGS+=-I${LIBXOSRC}/libxo

# XXX For xo_config.h
CFLAGS+=-I${SRCTOP}/lib/libxo/libxo

LIBADD=	xo util

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
