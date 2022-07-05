# $FreeBSD: b77322df4ee234f2ad9b92bb730573bcaac6cf24 $

.include <googletest.test.inc.mk>

GTEST_DIR=	${SRCTOP}/contrib/googletest
GOOGLEMOCK_SRCROOT= ${GTEST_DIR}/googlemock
GOOGLETEST_SRCROOT= ${GTEST_DIR}/googletest

CXXFLAGS+=	${GTESTS_FLAGS}

# Silence warnings about usage of deprecated std::auto_ptr
CXXWARNFLAGS+=	-Wno-deprecated-declarations

# Silence warnings about usage of deprecated implicit copy constructors
CXXWARNFLAGS+=  -Wno-deprecated-copy
