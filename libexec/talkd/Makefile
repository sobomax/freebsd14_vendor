#	@(#)Makefile	8.1 (Berkeley) 6/4/93
# $FreeBSD: 280d828d52486b915ad3db51bda22b4df3a52dfe $

PROG=	ntalkd
SRCS=	talkd.c announce.c process.c table.c print.c ttymsg.c
.PATH:  ${SRCTOP}/usr.bin/wall
MAN=	talkd.8
CFLAGS+=-I${SRCTOP}/usr.bin/wall

.include <bsd.prog.mk>
