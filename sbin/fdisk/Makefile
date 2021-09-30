# $FreeBSD: eaed0aea04aa2733ec5923396a0e08a2fe239fa1 $

PACKAGE=runtime
PROG=	fdisk
SRCS=	fdisk.c fdisk_mbr_enc.c
WARNS?=	4
MAN=	fdisk.8

LIBADD=	geom

.include <bsd.prog.mk>

test:	${PROG}
	sh ${.CURDIR}/runtest.sh
