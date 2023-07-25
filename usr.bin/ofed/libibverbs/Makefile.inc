# $FreeBSD: 2dd7ad7a1846cc87586ddcaa146372de99265dc0 $

_spath=${SRCTOP}/contrib/ofed/libibverbs
.PATH: ${_spath}/examples ${_spath}/man

BINDIR?=	/usr/bin
CFLAGS+=	-I${_spath}
LIBADD+=	ibverbs mlx4 mlx5 cxgb4 irdma pthread

WARNS?=	2
