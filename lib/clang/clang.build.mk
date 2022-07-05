# $FreeBSD: fb64b16935f22290bee8759d3a3370efdb8dc705 $

.include <src.opts.mk>

.ifndef CLANG_SRCS
.error Please define CLANG_SRCS before including this file
.endif

CFLAGS+=	-I${CLANG_SRCS}/include

.if ${MK_CLANG_FULL} != "no"
CFLAGS+=	-DCLANG_ENABLE_ARCMT
CFLAGS+=	-DCLANG_ENABLE_STATIC_ANALYZER
.endif

CFLAGS.gcc+=	-fno-strict-aliasing

.include "llvm.build.mk"
