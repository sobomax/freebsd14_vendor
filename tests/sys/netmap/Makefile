# $FreeBSD: a1d61ddf895243414a1fe76b0bebb81c19fc86e6 $

PACKAGE=	tests

TESTSDIR=	${TESTSBASE}/sys/netmap
TEST_METADATA+=	required_user="root"
TEST_METADATA+=	is_exclusive=true

PLAIN_TESTS_C+=	ctrl-api-test

CFLAGS+=	-I${SRCTOP}/tests
LIBADD+= 	pthread

WARNS?=		6

.include <bsd.test.mk>
