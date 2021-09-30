#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: b9dff078536367d8af2af89a30b0679d6a93be72 $

.include <src.opts.mk>

PROG=	chown
LINKS=	${BINDIR}/chown /usr/bin/chgrp
MAN=	chgrp.1 chown.8

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
