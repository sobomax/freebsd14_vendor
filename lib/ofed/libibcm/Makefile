# $FreeBSD: 8593683a0d09e0e0102b966d173a55e1d8e9a55f $

_spath=	${SRCTOP}/contrib/ofed/libibcm
.PATH: ${_spath}

SHLIBDIR?=	/usr/lib
LIB=		ibcm
SHLIB_MAJOR=	1
MK_PROFILE=	no
SRCS=		cm.c
LIBADD=		ibverbs
CFLAGS+=	-I${_spath}
MAN=
VERSION_MAP=	${_spath}/libibcm.map

.include <bsd.lib.mk>
