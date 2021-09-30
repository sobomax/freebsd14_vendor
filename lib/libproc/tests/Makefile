# $FreeBSD: 93f50789c88c2aea2ea037b552b06daaa22961ca $

ATF_TESTS_C+=	proc_test

PROGS=		target_prog
SRCS_target_prog=	target_prog.c
BINDIR_target_prog=	${TESTSDIR}

LIBADD=	elf proc rtld_db util

# Ensure that symbols aren't stripped from the test program, as they're needed
# for testing symbol lookup.
STRIP=
CFLAGS.target_prog.c+= -O0

.include <bsd.test.mk>
