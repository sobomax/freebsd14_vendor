# $FreeBSD: 8480cad426747f1d43c7c8e907289284b02f00e4 $

PACKAGE=	clibs
SRCDIR=		${SRCTOP}/contrib/libcxxrt

SHLIB_MAJOR=	1
SHLIBDIR?=	/lib

.PATH: ${SRCDIR}

LIB=		cxxrt

SRCS+=		libelftc_dem_gnu3.c\
		terminate.cc\
		dynamic_cast.cc\
		memory.cc\
		auxhelper.cc\
		exception.cc\
		stdexcept.cc\
		typeinfo.cc\
		guard.cc

WARNS=		0
CFLAGS+=	-isystem ${SRCDIR} -nostdinc++
CXXSTD?=	c++14
VERSION_MAP=	${.CURDIR}/Version.map

.include <bsd.lib.mk>
