# $FreeBSD: cbdb87cb27605b694fa346c44d1145ad65f968c9 $

PACKAGE=	lib${LIB}
BZ2DIR=	${SRCTOP}/contrib/bzip2
.PATH: ${BZ2DIR}

LIB=		bz2
SHLIB_MAJOR=	4
SRCS=		bzlib.c blocksort.c compress.c crctable.c decompress.c \
		huffman.c randtable.c
INCS=		bzlib.h
CFLAGS+=	-I${BZ2DIR}

WARNS?=		3

.include <bsd.lib.mk>
