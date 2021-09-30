# $FreeBSD: c22fb9aaa60d40ec9005763d9879ad6fee16ddea $

PACKAGE=	iscsi
PROG=		iscsid
SRCS=		chap.c discovery.c iscsid.c keys.c log.c login.c pdu.c
CFLAGS+=	-I${.CURDIR}
CFLAGS+=	-I${SRCTOP}/sys/cam
CFLAGS+=	-I${SRCTOP}/sys/dev/iscsi
CFLAGS+=	-DICL_KERNEL_PROXY
MAN=		iscsid.8

LIBADD=		md util

WARNS=		6

.include <bsd.prog.mk>
