# $FreeBSD: 36f7228c079b01b69e95162b854604353415e224 $

.include <googletest.test.inc.mk>

GTEST_DIR=	${SRCTOP}/contrib/googletest
GOOGLEMOCK_SRCROOT= ${GTEST_DIR}/googlemock
GOOGLETEST_SRCROOT= ${GTEST_DIR}/googletest

CXXFLAGS+=	${GTESTS_FLAGS}

# Silence warnings about usage of deprecated std::auto_ptr
CXXWARNFLAGS+=	-Wno-deprecated-declarations
