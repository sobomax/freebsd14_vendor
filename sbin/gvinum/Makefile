# $FreeBSD: 4caa775be2e1509001951d9da5172acf2166781e $

PACKAGE=runtime
PROG=	gvinum
SRCS=	gvinum.c gvinum.h geom_vinum_share.c
MAN=	gvinum.8

WARNS=		2
CFLAGS+=	-I${SRCTOP}/sys -I${SYSROOT:U${DESTDIR}}/${INCLUDEDIR}/edit

LIBADD=	edit geom

.PATH: ${SRCTOP}/sys/geom/vinum

.include <bsd.prog.mk>
