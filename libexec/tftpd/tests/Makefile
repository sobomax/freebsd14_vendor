# $FreeBSD: 06c5537372a70fa7e9d2888edf90725904aa0718 $

.include <bsd.own.mk>

# Skip on GCC 4.2, because it lacks __COUNTER__
.if ${COMPILER_TYPE} != "gcc" || ${COMPILER_VERSION} >= 40300
ATF_TESTS_C=	functional
TEST_METADATA.functional+=	timeout=15
.endif

LIBADD=	util
WARNS?=	6

.include <bsd.test.mk>
