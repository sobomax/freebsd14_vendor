# $FreeBSD: 410f268a39d11a44b5af685e06adfe8e93a92564 $

PACKAGE=runtime
PROG=	fdisk
SRCS=	fdisk.c geom_mbr_enc.c
WARNS?=	4
MAN=	fdisk.8

.PATH:	${SRCTOP}/sys/geom

LIBADD=	geom

.include <bsd.prog.mk>

test:	${PROG}
	sh ${.CURDIR}/runtest.sh
