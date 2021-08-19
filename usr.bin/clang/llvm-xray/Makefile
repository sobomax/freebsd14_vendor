# $FreeBSD: 26083e54795fcb8397195b3816ee59e6ae3c142a $

PROG_CXX=	llvm-xray
MAN=

SRCDIR=		llvm/tools/llvm-xray
SRCS+=		func-id-helper.cpp
SRCS+=		llvm-xray.cpp
SRCS+=		xray-account.cpp
SRCS+=		xray-color-helper.cpp
SRCS+=		xray-converter.cpp
SRCS+=		xray-extract.cpp
SRCS+=		xray-graph-diff.cpp
SRCS+=		xray-graph.cpp
SRCS+=		xray-registry.cpp
SRCS+=		xray-stacks.cpp

LIBADD+=	z

.include "../llvm.prog.mk"
