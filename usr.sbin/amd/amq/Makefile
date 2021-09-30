# ex:ts=8
#
# Makefile for amd
# 	This file is under a "BSD" copyright (c) by David O'Brien 1998
#
# $FreeBSD: a2069705478b54893f411e73e4e90fd02a089660 $
#

.PATH:	${SRCTOP}/contrib/amd/amq

PROG=	amq
MAN=	amq.8
SRCS=	amq.c amq_clnt.c amq_xdr.c

CFLAGS+= -I${SRCTOP}/contrib/amd/amq

LIBADD=	amu

.include <bsd.prog.mk>
