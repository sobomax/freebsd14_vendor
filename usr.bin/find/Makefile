#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: b227c95509f66c081c4564bc8338778f45cbd759 $

.include <src.opts.mk>

PROG=	find
SRCS=	find.c function.c ls.c main.c misc.c operator.c option.c \
	getdate.y
YFLAGS=
CFLAGS.clang+=	-Werror=undef

NO_WMISSING_VARIABLE_DECLARATIONS=

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
