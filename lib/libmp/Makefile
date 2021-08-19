# $FreeBSD: 9f001f5215196d9d5cd66b680844240e1a56c8cc $

.include <src.opts.mk>

PACKAGE=lib${LIB}
LIB=		mp
SHLIB_MAJOR=	7
LIBADD=		crypto
MAN=		libmp.3
INCS=		mp.h
SRCS=		mpasbn.c

CFLAGS+=	-I${SRCTOP}/crypto

VERSION_DEF=	${SRCTOP}/lib/libc/Versions.def
SYMBOL_MAPS=	${.CURDIR}/Symbol.map

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.lib.mk>
