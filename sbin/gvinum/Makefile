# $FreeBSD: 18550053228a9fe26fdeb72db31ff7ed5814d41a $

PACKAGE=runtime
PROG=	gvinum
SRCS=	gvinum.c gvinum.h geom_vinum_share.c
MAN=	gvinum.8

WARNS?=		2
CFLAGS+=	-I${SRCTOP}/sys -I${SYSROOT:U${DESTDIR}}/${INCLUDEDIR}/edit

LIBADD=	edit geom

.PATH: ${SRCTOP}/sys/geom/vinum

.include <bsd.prog.mk>
