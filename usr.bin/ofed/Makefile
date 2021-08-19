# $FreeBSD: 3c43e201825758ee843d14aadba94d1ce5d92c22 $

.include <src.opts.mk>

SUBDIR= \
	libibverbs \
	librdmacm \
	infiniband-diags

SUBDIR.${MK_OFED_EXTRA}+= opensm

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
