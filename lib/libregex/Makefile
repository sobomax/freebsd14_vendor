# $FreeBSD: 36c8b778d3945d43d47c1b9a47f50f1ae7d23ed7 $

.include <src.opts.mk>

PACKAGE=	runtime

LIB=	regex
SHLIB_MAJOR=	1
SHLIB_MINOR=	0

CFLAGS+=	-DLIBREGEX
LIBC_SRCTOP=	${.CURDIR:H}/libc
WARNS?=	2

VERSION_DEF=	${.CURDIR}/Versions.def
SYMBOL_MAPS=	${.CURDIR}/Symbol.map

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include "../Makefile.inc"
.include "${LIBC_SRCTOP}/regex/Makefile.inc"
.include <bsd.lib.mk>
