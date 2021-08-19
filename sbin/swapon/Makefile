#	@(#)Makefile	8.1 (Berkeley) 6/5/93
# $FreeBSD: c832be3dc96a48ed9aa16bf1bd9e5fda5a005ee0 $

PACKAGE=runtime
PROG=	swapon
MAN=	swapon.8
LINKS=	${BINDIR}/swapon ${BINDIR}/swapoff
LINKS+=	${BINDIR}/swapon ${BINDIR}/swapctl
MLINKS=	swapon.8 swapoff.8
MLINKS+=swapon.8 swapctl.8

LIBADD=	util

.include <bsd.prog.mk>
