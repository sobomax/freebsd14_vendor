# $FreeBSD: 99c4a91a3e693f25fd793748f90411de67c9623a $

.include <src.opts.mk>

SUBDIR=	${_zfs} ${_zpool}

SUBDIR.${MK_TESTS}+= tests

.if ${MK_ZFS} != "no"
_zfs=	zfs
_zpool=	zpool
.endif

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
