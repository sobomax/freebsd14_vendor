# $FreeBSD: 3540dcc8401a4af505de9b2affbf7f00c7b6581a $

.PATH: ${SRCTOP}/lib/libc/iconv

PROG=	mkesdb
.if defined(BOOTSTRAPPING)
# When bootstrapping, the host libc might not contain these expected symbols
# so compile them directly into the binary.
SRCS=	citrus_bcs.c citrus_db_factory.c citrus_db_hash.c \
	citrus_lookup_factory.c
.endif

NO_WMISSING_VARIABLE_DECLARATIONS=

.include "${.CURDIR}/Makefile.inc"
.include <bsd.prog.mk>
