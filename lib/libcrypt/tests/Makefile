# $FreeBSD: 15798b215d1772689371cdd337b300c334a9a98c $

ATF_TESTS_C+= crypt_tests

NETBSD_ATF_TESTS_C+= crypt_test

CFLAGS+= -I${.CURDIR:H}
LIBADD=	crypt

.include <netbsd-tests.test.mk>

.include <bsd.test.mk>
