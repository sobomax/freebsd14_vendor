# $FreeBSD: f4b4bdd946dd678cc677b80638fa58bbaa22ae00 $

PACKAGE=	tests

TESTSDIR=		${TESTSBASE}/sys/vfs

ATF_TESTS_C+=	lookup_cap_dotdot
CFLAGS.lookup_cap_dotdot.c+=	-I${SRCTOP}/tests

#ATF_TESTS_SH+=	lookup_test

TAP_TESTS_SH+=	trailing_slash

.include <bsd.test.mk>
