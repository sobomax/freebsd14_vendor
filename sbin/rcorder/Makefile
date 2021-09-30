#       $NetBSD: Makefile,v 1.1 1999/11/23 05:28:20 mrg Exp $
# $FreeBSD: 7bab197ed4ab0259dc04ab34421da523574769c6 $

PACKAGE=rc
PROG=   rcorder
SRCS=   ealloc.c hash.c rcorder.c
MAN=	rcorder.8

LIBADD=	util

CFLAGS+= -DORDER

#CFLAGS+= -DDEBUG

.include <bsd.prog.mk>
