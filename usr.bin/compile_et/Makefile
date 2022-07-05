# $FreeBSD: a7a7130e92282a220e48026b307125fda9f02b77 $

.PATH: ${SRCTOP}/contrib/com_err

PACKAGE=	kerberos

PROG=	compile_et
SRCS=	compile_et.c parse.y lex.l
LIBADD=	roken vers
CFLAGS+=-I. -I${SRCTOP}/contrib/com_err

WARNS?=	0

.include <bsd.prog.mk>
