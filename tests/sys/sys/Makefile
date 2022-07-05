# $FreeBSD: f6c45971d93c9ae141746af7a4282f001d649578 $

.include <bsd.compiler.mk>

TESTSDIR=	${TESTSBASE}/sys/sys

ATF_TESTS_C=	arb_test \
		bitset_test \
		bitstring_test \
		qmath_test \
		rb_test \
		splay_test

.if ${COMPILER_TYPE} == "gcc"
CFLAGS.bitstring_test=	-fno-strict-overflow
.endif

.include <bsd.test.mk>
