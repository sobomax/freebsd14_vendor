# $FreeBSD: ac8be92c8dbd8585b404862e976cea78a51e797c $

PACKAGE=lib${LIB}
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
