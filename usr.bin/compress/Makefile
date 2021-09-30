#	@(#)Makefile	8.2 (Berkeley) 4/17/94
# $FreeBSD: 1443b96b1abce00ce22740189de4abe6d04cdb3f $

.include <src.opts.mk>

PROG=	compress
SRCS=	compress.c zopen.c
LINKS=	${BINDIR}/compress ${BINDIR}/uncompress
MLINKS=	compress.1 uncompress.1

# XXX zopen is not part of libc
# MAN=zopen.3

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
