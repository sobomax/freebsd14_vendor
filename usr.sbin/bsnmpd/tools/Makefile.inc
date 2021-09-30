# $FreeBSD: 9d5ac4cdb8106e4fb257054e935d327e152366d8 $
# Author: Shteryana Shopova <syrinx@FreeBSD.org>

BINDIR?= /usr/bin
PACKAGE=	bsnmp

CFLAGS+= -I. -I${.CURDIR}

WARNS?=		6
