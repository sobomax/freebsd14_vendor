#	From: @(#)Makefile	8.3 (Berkeley) 1/25/94
# $FreeBSD: bc16512c5a262e9c88b89d2feaa9b3f2d97c5510 $

PROG=	mountd
SRCS=	mountd.c getmntopts.c
MAN=	exports.5 netgroup.5 mountd.8

MOUNT=  ${SRCTOP}/sbin/mount
CFLAGS+= -I${MOUNT}
WARNS?= 2

.PATH: ${MOUNT}

LIBADD=	util

.include <bsd.prog.mk>
