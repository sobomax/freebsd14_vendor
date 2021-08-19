# $FreeBSD: c61134d1ea5e3bae1beaeb6662ca96e329084af8 $

PACKAGE=lib${LIB:tl}
LIB=	BlocksRuntime
SHLIB_MAJOR=0
CFLAGS+=-I${.CURDIR}
WARNS?=	2

.PATH: ${SRCTOP}/contrib/llvm-project/compiler-rt/lib/BlocksRuntime

INCS=	Block.h Block_private.h
SRCS=	data.c runtime.c

.include <bsd.lib.mk>
