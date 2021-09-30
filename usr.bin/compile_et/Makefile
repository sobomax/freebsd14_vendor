# $FreeBSD: aeccbf3fd55fb0937fee1e461f0e666c1636cefe $

.PATH: ${SRCTOP}/contrib/com_err

PROG=	compile_et
SRCS=	compile_et.c parse.y lex.l
LIBADD=	roken vers
CFLAGS+=-I. -I${SRCTOP}/contrib/com_err

WARNS?=	0

.include <bsd.prog.mk>
