# $FreeBSD: 3b452a1f8e123c21c75dba41c83600a5de1d4398 $

.include <src.opts.mk>

PROG_CXX=	llvm-cxxfilt

SRCDIR=		llvm/tools/llvm-cxxfilt
SRCS+=		llvm-cxxfilt.cpp

.if ${MK_LLVM_CXXFILT} != "no"
LINKS=		${BINDIR}/llvm-cxxfilt ${BINDIR}/c++filt
MLINKS=		llvm-cxxfilt.1 c++filt.1
.endif

.include "../llvm.prog.mk"
