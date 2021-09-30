# $FreeBSD: c9083eb6a1d1ea6b9dfe312c25530ff083438dab $

PROG=	iovctl
SRCS=	iovctl.c parse.c validate.c
LIBADD=	nv ucl m

CFLAGS+=-I${SRCTOP}/contrib/libucl/include

WARNS?=6

MAN=	\
	iovctl.8 \
	iovctl.conf.5 \

.include <bsd.own.mk>
.include <bsd.prog.mk>

