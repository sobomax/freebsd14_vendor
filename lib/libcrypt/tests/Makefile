# $FreeBSD: 22b7fccccbba9c4b8b27ab9732d22ac7d70ee27a $

ATF_TESTS_C+= crypt_tests

NETBSD_ATF_TESTS_C+= crypt_test

WARNS?=		6
CFLAGS+= -I${.CURDIR:H}
LIBADD=	crypt

.include <netbsd-tests.test.mk>

.include <bsd.test.mk>
