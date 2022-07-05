#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: b93fdba5bd4fbf962d5db4b4b37e5f822ada1bf8 $

.include <src.opts.mk>

PACKAGE=	runtime

PROG=	find
SRCS=	find.c function.c ls.c main.c misc.c operator.c option.c \
	getdate.y
YFLAGS=
CFLAGS.clang+=	-Werror=undef

NO_WMISSING_VARIABLE_DECLARATIONS=

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
