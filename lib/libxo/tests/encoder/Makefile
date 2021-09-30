# $FreeBSD: a8839e45a9fa6be15ea62aaa2a5b5d266ebf610c $

PACKAGE=	tests

LIBXOSRC=	${SRCTOP}/contrib/libxo

.PATH: ${LIBXOSRC}/encoder/test

SHLIB_NAME=	libenc_test.so

LIBDIR=		${TESTSBASE}/lib/libxo

SYMLINKS+=	${LIBDIR}/${SHLIB_NAME} /usr/lib/libxo/encoder/test.enc

SRCS=		enc_test.c

CFLAGS+=	-I${LIBXOSRC}/libxo -I${.CURDIR:H:H}/libxo

LIBADD=		xo

.include <bsd.lib.mk>
