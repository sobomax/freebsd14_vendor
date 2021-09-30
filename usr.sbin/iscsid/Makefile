# $FreeBSD: e3b1acb636b2880d9620ac3deb1672c7675ba8c5 $

PACKAGE=	iscsi
PROG=		iscsid
SRCS=		chap.c discovery.c iscsid.c keys.c log.c login.c pdu.c
CFLAGS+=	-I${.CURDIR}
CFLAGS+=	-I${SRCTOP}/sys/cam
CFLAGS+=	-I${SRCTOP}/sys/dev/iscsi
CFLAGS+=	-DICL_KERNEL_PROXY
MAN=		iscsid.8

LIBADD=		md util

.include <bsd.prog.mk>
