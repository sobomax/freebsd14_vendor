# $FreeBSD: c6845ac57e5c5c3862fc6b48608f51b63cc95a77 $

ATF_TESTS_C+=	in_cksum_test
SRCS.in_cksum_test= in_cksum_test.c ../utils.c

PACKAGE= tests

ATF_TESTS_SH+=	ping_test
# Exclusive because each injection test case uses the same IP addresses
TEST_METADATA.ping_test+=	is_exclusive="true"

${PACKAGE}FILES+= ping_c1_s56_t1.out
${PACKAGE}FILES+= ping_6_c1_s8_t1.out
${PACKAGE}FILES+= ping_c1_s56_t1_S127.out
${PACKAGE}FILES+= ping_c1_s8_t1_S1.out
${PACKAGE}FILES+= injection.py

.include <bsd.test.mk>
