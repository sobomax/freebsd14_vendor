# @(#)Makefile    8.8 (Berkeley) 6/21/2000
#
# $TSHeader: src/sbin/ffsinfo/Makefile,v 1.3 2000/12/05 19:45:10 tomsoft Exp $
# $FreeBSD: 19aa71ab89c446ebffe326fc7dac95d6d21400c4 $
#

GROWFS= ${.CURDIR:H}/growfs
.PATH: ${GROWFS}

PACKAGE=runtime
PROG=	ffsinfo
SRCS=	ffsinfo.c debug.c
MAN=	ffsinfo.8

WARNS?=	1
CFLAGS+=-DFS_DEBUG -I${GROWFS}
LIBADD=	ufs

.include <bsd.prog.mk>
