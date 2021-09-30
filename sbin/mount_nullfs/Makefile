#	@(#)Makefile	8.3 (Berkeley) 3/27/94
# $FreeBSD: 43580cfdb82f644c918235b793c5eb6639f9eb5a $

PACKAGE=runtime
PROG=	mount_nullfs
SRCS=	mount_nullfs.c getmntopts.c
MAN=	mount_nullfs.8

MOUNT=	${.CURDIR:H}/mount
CFLAGS+=-I${MOUNT}

.PATH:	${MOUNT}

.include <bsd.prog.mk>
