# $FreeBSD: 42fca7dab71c22c6632072061fa0f3bee5f5258d $

PROG=	iovctl
SRCS=	iovctl.c parse.c validate.c
LIBADD=	nv ucl m

CFLAGS+=-I${SRCTOP}/contrib/libucl/include

MAN=	\
	iovctl.8 \
	iovctl.conf.5 \

.include <bsd.own.mk>
.include <bsd.prog.mk>

