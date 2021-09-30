# $FreeBSD: ec0e67f67d20cbb086a2ff6fed0edbe12d558f9d $

PROG=	fwcontrol
SRCS=	fwcontrol.c fwcrom.c fwdv.c fwmpegts.c
MAN=	fwcontrol.8
WARNS?=	3

.PATH:	${SRCTOP}/sys/dev/firewire

SDIR= ${SRCTOP}/sys
CFLAGS+=-I${.CURDIR} -I${SDIR}

.include <bsd.prog.mk>
