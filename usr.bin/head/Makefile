#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: b966f8165795a96a9f2419f20f544de5b0723365 $

.include <src.opts.mk>

PROG=	head

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.if ${MK_CASPER} != "no" && !defined(RESCUE)
LIBADD+=        casper
LIBADD+=        cap_fileargs
CFLAGS+=-DWITH_CASPER
.endif

.include <bsd.prog.mk>
