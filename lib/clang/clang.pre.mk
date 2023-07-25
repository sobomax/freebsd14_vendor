# $FreeBSD: 9ef401645f14aca8ccd82f5e86decfd6f279c32e $

.include "llvm.pre.mk"

CLANG_SRCS=	${LLVM_BASE}/clang

CLANG_TBLGEN?=	clang-tblgen
CLANG_TBLGEN_BIN!= which ${CLANG_TBLGEN}
