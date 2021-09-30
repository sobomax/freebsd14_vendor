# $FreeBSD: eed87935e6e7f6b7d61ddb6888f7581cfa3b3cf4 $

.include <bsd.compiler.mk>

TESTSDIR=	${TESTSBASE}/sys/sys

ATF_TESTS_C=	arb_test bitstring_test qmath_test rb_test splay_test

WARNS?=	5

.if ${COMPILER_TYPE} == "gcc"
CFLAGS.bitstring_test=	-fno-strict-overflow
.endif

.include <bsd.test.mk>
