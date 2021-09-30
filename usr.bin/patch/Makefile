#	$OpenBSD: Makefile,v 1.4 2005/05/16 15:22:46 espie Exp $
# $FreeBSD: 96caa8bb299c0157d3bc28e769479f2f6e598a82 $

.include <src.opts.mk>

PROG=	patch

SRCS=	backupfile.c inp.c mkpath.c patch.c pch.c util.c

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
