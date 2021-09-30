# $FreeBSD: 9211700ada98124604ef2e93f63d6ffe6c347790 $

TESTSDIR=	${TESTSBASE}/sys/kern/pipe

PLAIN_TESTS_C+= big_pipe_test
PLAIN_TESTS_C+= pipe_fstat_bug_test
PLAIN_TESTS_C+= pipe_ino_test
ATF_TESTS_C+=   pipe_kqueue_test
PLAIN_TESTS_C+= pipe_overcommit1_test
PLAIN_TESTS_C+= pipe_overcommit2_test
PLAIN_TESTS_C+= pipe_reverse2_test
PLAIN_TESTS_C+= pipe_reverse_test
PLAIN_TESTS_C+= pipe_wraparound_test

.include <bsd.test.mk>
