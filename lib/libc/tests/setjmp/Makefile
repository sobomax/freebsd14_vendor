# $FreeBSD: 39b0a96295f43ba40271fcd3679dc205ed35aab6 $

NETBSD_ATF_TESTS_C=	setjmp_test
NETBSD_ATF_TESTS_C+=	threadjmp_test

LIBADD.t_threadjmp+=	pthread

WARNS?=	4

.include "../Makefile.netbsd-tests"

.include <bsd.test.mk>
