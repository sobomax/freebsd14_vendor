# ex:ts=8
#
# Makefile for amd
# 	This file is under a "BSD" copyright (c) by David O'Brien 1998
#
# $FreeBSD: 0d634be9742ba5e2f11caaf31ca5a6bf3177c0ba $

.PATH:	${SRCTOP}/contrib/amd/amq

BINDIR=	/usr/bin

PROG=	pawd
SRCS=	pawd.c amq_clnt.c amq_xdr.c

CFLAGS+= -I${SRCTOP}/contrib/amd/amq

LIBADD=	amu

.include <bsd.prog.mk>
