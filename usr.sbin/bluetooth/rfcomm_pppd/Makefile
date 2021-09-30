# $Id: Makefile,v 1.7 2003/09/07 18:32:11 max Exp $
# $FreeBSD: c739fbf1174fa930a4b71231d16b3a73e4c4feef $

.PATH:	${SRCTOP}/usr.bin/bluetooth/rfcomm_sppd

PROG=		rfcomm_pppd
MAN=		rfcomm_pppd.8
SRCS=		rfcomm_pppd.c rfcomm_sdp.c
WARNS?=		2

LIBADD=		bluetooth sdp

.include <bsd.prog.mk>
