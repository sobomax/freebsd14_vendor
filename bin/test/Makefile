#        @(#)Makefile	8.1 (Berkeley) 5/31/93
# $FreeBSD: 59ea2be99539d5dd148307cbf4aa0b7586998022 $

.include <src.opts.mk>

PACKAGE=runtime
PROG=	test
LINKS=	${BINDIR}/test ${BINDIR}/[
MLINKS=	test.1 [.1

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
