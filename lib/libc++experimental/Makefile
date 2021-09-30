# $FreeBSD: f3b17c5cff9a2cf82f25ad14da8ac3a8bccd4076 $

.include <src.opts.mk>

PACKAGE=	clibs
SRCDIR=		${SRCTOP}/contrib/llvm-project/libcxx

LIB=		c++experimental
NO_PIC=
MK_PROFILE=	no

.PATH:		${SRCDIR}/src/experimental

SRCS+=		memory_resource.cpp

WARNS?=		0
CXXFLAGS+=	${PICFLAG}
CXXFLAGS+=	-isystem ${SRCDIR}/include
CXXFLAGS+=	-nostdinc++
CXXFLAGS+=	-nostdlib
CXXFLAGS+=	-D_LIBCPP_BUILDING_LIBRARY
CXXFLAGS+=	-DLIBCXXRT
CXXSTD?=	c++14

.include <bsd.lib.mk>
