# $FreeBSD: 186bb20088ce524dc4a4eec87ecbbb2a8605f3af $

.include <src.opts.mk>

PACKAGE=lib${LIB}
LIB=	regex
SHLIB_MAJOR=	1
SHLIB_MINOR=	0

CFLAGS+=	-DLIBREGEX
LIBC_SRCTOP=	${.CURDIR:H}/libc
WARNS?=	2

VERSION_DEF=	${.CURDIR}/Versions.def
SYMBOL_MAPS=	${.CURDIR}/Symbol.map

#HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include "../Makefile.inc"
.include "${LIBC_SRCTOP}/regex/Makefile.inc"
.include <bsd.lib.mk>
