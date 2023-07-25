# $FreeBSD: 88d6b72425805027e158086385ebb01155280c67 $

PACKAGE=geom
PROG=	gvinum
SRCS=	gvinum.c gvinum.h geom_vinum_share.c
MAN=	gvinum.8

WARNS?=		2
CFLAGS+=	-I${SRCTOP}/sys -I${SYSROOT:U${DESTDIR}}/${INCLUDEDIR}/edit

LIBADD=	edit geom

.PATH: ${SRCTOP}/sys/geom/vinum

.include <bsd.prog.mk>
