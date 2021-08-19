# $FreeBSD: fe9883f97a738215b4d6a2829ebfcb37d7969817 $

.include <src.opts.mk>

ELFTCDIR=	${SRCTOP}/contrib/elftoolchain
ADDR2LINEDIR=	${ELFTCDIR}/addr2line

.PATH: ${ADDR2LINEDIR}

PROG=	addr2line

LIBADD=	elftc dwarf elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
