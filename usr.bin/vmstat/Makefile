#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: bcbf4afb147bce93169954d3012b03d4193f7dd1 $

.include <src.opts.mk>

PROG=	vmstat
MAN=	vmstat.8
LIBADD=	devstat kvm memstat xo util

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
