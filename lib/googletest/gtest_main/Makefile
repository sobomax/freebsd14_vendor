# $FreeBSD: dc102ed8a6e072ca4e7761513c358fabd7c522ac $

.include <bsd.init.mk>

.PATH:	${GOOGLETEST_SRCROOT}/include ${GOOGLETEST_SRCROOT}/src

LIB_CXX=	gtest_main
SHLIB_MAJOR=	0
PRIVATELIB=	true

CXXFLAGS+=	-I${GOOGLETEST_SRCROOT}/include
CXXFLAGS+=	-I${GOOGLETEST_SRCROOT}

LIBADD+=	gtest
# NB: LDFLAGS added for buildworld builds
LDFLAGS+=	-L${LIBGTESTDIR}

SRCS+=		gtest_main.cc

.include <bsd.lib.mk>
