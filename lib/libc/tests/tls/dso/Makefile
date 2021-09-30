# $FreeBSD: 84225f4a1d0e2bf5c735170288d0c626763130bd $

TESTSRC=	${SRCTOP}/contrib/netbsd-tests/lib/libc/tls/${.CURDIR:T}

LIB=		h_tls_dlopen
SHLIB_NAME=	h_tls_dlopen.so
SRCS=		h_tls_dlopen.c

MAN=

LIBDIR=		${TESTSBASE}/lib/libc/tls
SHLIB_MAJOR=	1

.include "../../Makefile.netbsd-tests"

.include <bsd.lib.mk>
