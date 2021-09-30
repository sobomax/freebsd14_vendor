# $FreeBSD: 238f342d55ebe03945c5c5fde8c4b7a265be23c8 $

.include <bsd.init.mk>

.PATH:	${GOOGLEMOCK_SRCROOT}/include ${GOOGLEMOCK_SRCROOT}/src

LIB_CXX=	gmock_main
SHLIB_MAJOR=	0
PRIVATELIB=	true

CXXFLAGS+=	-I${GOOGLEMOCK_SRCROOT}/include
CXXFLAGS+=	-I${GOOGLEMOCK_SRCROOT}
CXXFLAGS+=	-I${GOOGLETEST_SRCROOT}/include

LIBADD+=	gmock
# NB: LDFLAGS added for buildworld builds
LDFLAGS+=	-L${LIBGTESTDIR}
LDFLAGS+=	-L${LIBGMOCKDIR}

SRCS+=		gmock_main.cc

.include <bsd.lib.mk>
