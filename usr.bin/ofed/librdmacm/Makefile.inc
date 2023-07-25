# $FreeBSD: 88afd4d5b9f320ed775ca65542846959a790f9dc $

_spath=${SRCTOP}/contrib/ofed/librdmacm
.PATH: ${_spath}/examples ${_spath}/man

BINDIR?=	/usr/bin
CFLAGS+=	-I${SRCTOP}/contrib/ofed
LIBADD+=	ibverbs rdmacm irdma mlx4 mlx5 cxgb4 pthread

WARNS?=	0
