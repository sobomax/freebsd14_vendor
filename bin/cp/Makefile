#	@(#)Makefile	8.1 (Berkeley) 5/31/93
# $FreeBSD: a73ee5447769beef40fe1f0f6ad99ef03c1b8f5b $

.include <src.opts.mk>

PACKAGE=runtime
PROG=	cp
SRCS=	cp.c utils.c
CFLAGS+= -D_ACL_PRIVATE

HAS_TESTS=
SUBDIR.${MK_TESTS}=	tests

.include <bsd.prog.mk>
