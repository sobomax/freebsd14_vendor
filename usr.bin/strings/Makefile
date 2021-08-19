# $FreeBSD: e3c82f408824da521738c5178dbee44b7a93acd7 $

.include <src.opts.mk>

ELFTCDIR=	${SRCTOP}/contrib/elftoolchain

.PATH: ${ELFTCDIR}/strings

PROG=	strings

LIBADD=	elftc elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
