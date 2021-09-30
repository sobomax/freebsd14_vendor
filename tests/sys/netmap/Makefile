# $FreeBSD: 0228271dd6681df003713e2bdbcd021368a68049 $

PACKAGE=	tests

TESTSDIR=	${TESTSBASE}/sys/netmap
TEST_METADATA+=	required_user="root"
TEST_METADATA+=	is_exclusive=true

PLAIN_TESTS_C+=	ctrl-api-test

CFLAGS+=	-I${SRCTOP}/tests
LIBADD+= 	pthread

.include <bsd.test.mk>
