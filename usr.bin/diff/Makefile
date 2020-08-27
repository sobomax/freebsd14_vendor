# $FreeBSD: releng/11.3/usr.bin/diff/Makefile 315051 2017-03-11 05:01:29Z bapt $

.include <src.opts.mk>

PROG=	diff
SRCS=	diff.c diffdir.c diffreg.c xmalloc.c

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
