# $FreeBSD: 8cfd9b1c62e07c37b306a2fa982ea0e8d5d53e8c $

.include <src.opts.mk>

PROG=	ncal

LIBADD=	calendar ncursesw

LINKS=	${BINDIR}/ncal ${BINDIR}/cal
MLINKS=	ncal.1 cal.1

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
