# $FreeBSD: a2ecab10d5864f9d0196cd028045f18ee6b07d8c $

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

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.lib.mk>
