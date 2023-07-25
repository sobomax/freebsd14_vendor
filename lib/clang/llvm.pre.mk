
# $FreeBSD: 92124a7bf0927d60e8dc44f64388029711b3e74a $

LLVM_BASE=	${SRCTOP}/contrib/llvm-project
LLVM_SRCS=	${LLVM_BASE}/llvm

LLVM_TBLGEN?=	llvm-tblgen
LLVM_TBLGEN_BIN!= which ${LLVM_TBLGEN}
