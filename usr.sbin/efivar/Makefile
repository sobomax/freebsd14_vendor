# $FreeBSD: 3bc1868bf77b0088c2a7b736dd5e44a3e688086f $

PROG=	efivar
MAN=	efivar.8

LIBADD= efivar geom

SRCS=	efivar.c efiutil.c

EFIBOOT=${SRCTOP}/stand/efi
CFLAGS+=	-I${EFIBOOT}/include

.include <bsd.prog.mk>
