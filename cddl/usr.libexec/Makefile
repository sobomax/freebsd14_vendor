# $FreeBSD: 6280cbab576653c620aaa1d4fbae7afb3a7d3e11 $

.include <src.opts.mk>

SUBDIR=	${_zpool_influxdb}

.if ${MK_ZFS} != "no"
_zpool_influxdb= zpool_influxdb
.endif

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
