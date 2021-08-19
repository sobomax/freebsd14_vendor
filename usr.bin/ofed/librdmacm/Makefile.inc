# $FreeBSD: d407c8ff9681b95fbe27f194664194e4b21c1519 $

_spath=${SRCTOP}/contrib/ofed/librdmacm
.PATH: ${_spath}/examples ${_spath}/man

BINDIR?=	/usr/bin
CFLAGS+=	-I${SRCTOP}/contrib/ofed
LIBADD+=	ibverbs rdmacm mlx4 mlx5 cxgb4 pthread
