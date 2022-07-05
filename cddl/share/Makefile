# $FreeBSD: 68670ffbe7e0777b15caea74cd0e24fc402a8565 $

.include <src.opts.mk>

SUBDIR= ${_zfs}

.if ${MK_ZFS} != "no"
_zfs=   zfs
.endif

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
