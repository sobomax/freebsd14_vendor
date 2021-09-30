# $FreeBSD: 9ed20e6a94b004dc074cbb8737ab20a2cead6660 $

_spath=${SRCTOP}/contrib/ofed/libibverbs
.PATH: ${_spath}/examples ${_spath}/man

BINDIR?=	/usr/bin
CFLAGS+=	-I${_spath}
LIBADD+=	ibverbs mlx4 mlx5 cxgb4 pthread

