# $FreeBSD: ca687224b4958d8488a498c4c25f51e9ebe620a9 $

.PATH: ${SRCTOP}/lib/libc/iconv ${SRCTOP}/usr.bin/mkcsmapper

PROG=	mkcsmapper_static
SRCS=	citrus_bcs.c citrus_db_factory.c citrus_db_hash.c \
	citrus_lookup_factory.c citrus_pivot_factory.c
MAN=
NO_SHARED= yes
NO_WMISSING_VARIABLE_DECLARATIONS=

build-tools: mkcsmapper_static

.include "${SRCTOP}/usr.bin/mkcsmapper/Makefile.inc"
.include <bsd.prog.mk>

${PROG}: ${BUILD_TOOLS_META}
