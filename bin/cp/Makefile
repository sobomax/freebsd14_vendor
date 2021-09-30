#	@(#)Makefile	8.1 (Berkeley) 5/31/93
# $FreeBSD: d20f60e537d31e20e2e3cd5aa834ed6103b92bce $

PACKAGE=runtime
PROG=	cp
SRCS=	cp.c utils.c
CFLAGS+= -DVM_AND_BUFFER_CACHE_SYNCHRONIZED -D_ACL_PRIVATE

.include <bsd.prog.mk>
