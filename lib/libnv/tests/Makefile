# $FreeBSD: 713fb73fd2d4e85b2744b1b6f87ff13a4db7c665 $

ATF_TESTS_C= \
	nvlist_send_recv_test

ATF_TESTS_CXX=	\
	cnv_tests \
	dnv_tests \
	nv_array_tests \
	nv_tests

TAP_TESTS_C+=	nvlist_add_test
TAP_TESTS_C+=	nvlist_append_test
TAP_TESTS_C+=	nvlist_exists_test
TAP_TESTS_C+=	nvlist_free_test
TAP_TESTS_C+=	nvlist_get_test
TAP_TESTS_C+=	nvlist_move_test

LIBADD+=	nv

WARNS?=		3

.include <bsd.test.mk>
