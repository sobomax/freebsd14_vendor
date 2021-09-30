#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: d836912d915b4b3b8bdc44890cd5665bfde8d35a $

.PATH: ${.CURDIR:H}/timed

PROG=	timedc
MAN=	timedc.8
SRCS=	cmds.c cmdtab.c timedc.c byteorder.c measure.c cksum.c
BINOWN=	root
BINMODE= 4555

WARNS?=	1

.include "../../Makefile.inc"
.include <bsd.prog.mk>
