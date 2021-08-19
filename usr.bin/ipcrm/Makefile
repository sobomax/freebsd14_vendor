# $FreeBSD: bc30023ab846edfbb5b577b1af3816d07fdbc67e $

PROG=	ipcrm
SRCS=	ipcrm.c ipc.c
LIBADD=	kvm
CFLAGS+=-I${SRCTOP}/usr.bin/ipcs
.PATH:  ${SRCTOP}/usr.bin/ipcs

WARNS?=	0

.include <bsd.prog.mk>
