# $FreeBSD: e1a0719a89f4fffec4e2207b40076919d5fac883 $

LIB=		test${TESTNUM}
SHLIB_MAJOR=	0

SRCS+=		test.c

WARNS?=		3

DEBUG_FLAGS?=	-g

VERSION_DEF=	${.CURDIR}/../Versions.def
SYMBOL_MAPS=	${.CURDIR}/Symbol.map

MK_DEBUG_FILES=	yes
