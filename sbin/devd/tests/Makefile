# $FreeBSD: c0a346f94d3344ff8b1ade257ecfe8f1ff03cacc $

ATF_TESTS_C=	client_test
TEST_METADATA.client_test=	required_files="/var/run/devd.pid"
TEST_METADATA.client_test+=	required_programs="devd"
TEST_METADATA.client_test+=	required_user="root"
TEST_METADATA.client_test+=	timeout=15

WARNS?=	5

.include <bsd.test.mk>
