# $FreeBSD: 48bed64c26e40ce52300460bdc89e49afad1073c $

PROG=	bhyveload
SRCS=	bhyveload.c
MAN=	bhyveload.8
PACKAGE=	bhyve

LIBADD=	vmmapi

WARNS?=	3

CFLAGS+=-I${SRCTOP}/stand/userboot

.include <bsd.prog.mk>
