#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: ad4b540f819b69f4e7b1a451a172ed624b8d8adf $

PROG=	gcore
SRCS=	elfcore.c gcore.c
LIBADD=	sbuf util

.if ${MACHINE_ARCH} == "amd64"
SRCS+=	elf32core.c
.endif

WARNS?=	1

.include <bsd.prog.mk>
