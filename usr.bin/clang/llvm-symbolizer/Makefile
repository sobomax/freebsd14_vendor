# $FreeBSD: releng/12.2/usr.bin/clang/llvm-symbolizer/Makefile 363494 2020-07-24 20:48:06Z dim $

PROG_CXX=	llvm-symbolizer
MAN=		llvm-symbolizer.1 llvm-addr2line.1

SRCDIR=		llvm/tools/llvm-symbolizer
SRCS+=		llvm-symbolizer.cpp

LIBADD+=	z

LINKS+=		${BINDIR}/llvm-symbolizer ${BINDIR}/llvm-addr2line

.include "../llvm.prog.mk"
