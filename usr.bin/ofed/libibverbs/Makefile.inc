# $FreeBSD: 0f60546d982093a0aeabd481faf9b90772cf8465 $

_spath=${SRCTOP}/contrib/ofed/libibverbs
.PATH: ${_spath}/examples ${_spath}/man

BINDIR?=	/usr/bin
CFLAGS+=	-I${_spath}
LIBADD+=	ibverbs mlx4 mlx5 cxgb4 pthread

WARNS?=	2
