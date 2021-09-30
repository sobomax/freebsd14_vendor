# $FreeBSD: 5d983d6e017e9e8ddbb97e92ce4160e583d393bf $

PACKAGE=	runtime

LIB=		sbuf
SHLIBDIR?= 	/lib
SRCS=		subr_prf.c subr_sbuf.c

SHLIB_MAJOR	= 6

SYMBOL_MAPS=    ${.CURDIR}/Symbol.map
VERSION_DEF=	${.CURDIR}/Version.def

.include <src.opts.mk>

.PATH:	${SRCTOP}/sys/kern

HAS_TESTS=
SUBDIR.${MK_TESTS}+=	tests

.include <bsd.lib.mk>
