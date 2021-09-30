#	From: @(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 6a152c46268f7d4c714e80d8be62fbfc3840cff7 $

CONFS=	hosts.lpd printcap
PROG=	lpd
MAN=	lpd.8
SRCS=	lpd.c printjob.c recvjob.c lpdchar.c modes.c

CFLAGS+= -I${.CURDIR:H}/common_source

WARNS?=	1

LIBADD=	lpr

.include <bsd.prog.mk>
