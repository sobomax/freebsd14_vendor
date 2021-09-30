# $FreeBSD: e80374940e95345b8746b778f6e30890d4f87a47 $

PACKAGE=	tests

TESTSDIR=       ${TESTSBASE}/sys/netipsec/tunnel

ATF_TESTS_SH+=	empty \
		aes_cbc_128_hmac_sha1 \
		aes_cbc_256_hmac_sha2_256 \
		aes_gcm_128 \
		aes_gcm_256 \
		aesni_aes_cbc_128_hmac_sha1 \
		aesni_aes_cbc_256_hmac_sha2_256 \
		aesni_aes_gcm_128 \
		aesni_aes_gcm_256

${PACKAGE}FILES+=	utils.subr

.include <bsd.test.mk>
