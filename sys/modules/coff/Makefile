# $FreeBSD: 5325a962c91fab93ea947fe8b3d34410baef12b1 $

.PATH: ${SRCTOP}/sys/i386/ibcs2

KMOD=	ibcs2_coff
SRCS= 	imgact_coff.c vnode_if.h

CFLAGS+=	-DCOMPAT_IBCS2

.include <bsd.kmod.mk>
