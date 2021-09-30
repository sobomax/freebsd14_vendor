# $FreeBSD: db12061896d2d5e3c773cd436f913625e3f74f31 $
# Author: Shteryana Shopova <syrinx@FreeBSD.org>

BINDIR?= /usr/bin
PACKAGE=	bsnmp

CFLAGS+= -I. -I${.CURDIR}
