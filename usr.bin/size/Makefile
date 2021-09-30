# $FreeBSD: d7c8e4111034656421a1e31dea574a86479534a9 $

.include <src.opts.mk>

ELFTCDIR=	${SRCTOP}/contrib/elftoolchain
SIZEDIR=	${ELFTCDIR}/size

.PATH: ${SIZEDIR}

PROG=	size

LIBADD=	elftc elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
