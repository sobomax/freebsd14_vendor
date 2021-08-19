# $FreeBSD: 8b02ac727448d3fe8f1b4b4dfc734df20ed2a940 $

ELFTCDIR=	${SRCTOP}/contrib/elftoolchain

PROG=	elfctl

LIBADD=	elftc elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
