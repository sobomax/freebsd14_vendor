# $FreeBSD: 45b12b7bb75d5c968223aa1c515fb9623eae9b50 $

PLAIN_TESTS_SH=
.for test in	always_test \
		conflicts_test \
		fbsdid_test \
		ignore_test \
		preworld_test \
		tests_test \
		tzsetup_test
PLAIN_TESTS_SH+=	${test}
TEST_METADATA.${test}+=	required_user="root"
.endfor

.include <bsd.test.mk>
