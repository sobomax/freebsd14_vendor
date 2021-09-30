# $FreeBSD: 2f97e9155df33d5a74fdb6a77a4916b951ddeb19 $

.PATH: ${SRCTOP}/sys/fs/udf

KMOD=	udf

SRCS=	udf_vfsops.c udf_vnops.c osta.c
SRCS+=	vnode_if.h
EXPORT_SYMS=	udf_iconv

.include <bsd.kmod.mk>
