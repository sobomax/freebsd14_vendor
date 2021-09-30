# $Id: Makefile,v 1.7 2003/09/07 18:32:11 max Exp $
# $FreeBSD: 8974f8a3daef3d9546dc472ff60ffa725dbcf2f1 $

.PATH:	${SRCTOP}/usr.bin/bluetooth/rfcomm_sppd

PACKAGE=	bluetooth
PROG=		rfcomm_pppd
MAN=		rfcomm_pppd.8
SRCS=		rfcomm_pppd.c rfcomm_sdp.c
WARNS?=		2

LIBADD=		bluetooth sdp

.include <bsd.prog.mk>
