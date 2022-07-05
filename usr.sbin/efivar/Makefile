# $FreeBSD: aa00f4b79502cf41aaeeb7400f588121eacaefb5 $

PACKAGE=	efi-tools

PROG=	efivar
MAN=	efivar.8

LIBADD= efivar geom

SRCS=	efivar.c efiutil.c

EFIBOOT=${SRCTOP}/stand/efi
CFLAGS+=	-I${EFIBOOT}/include

.include <bsd.prog.mk>
