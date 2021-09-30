# $FreeBSD: 231c1d55fd887c64b81a3012f73e74ed78a9e96f $

.PATH: ${SRCTOP}/sys/fs/tmpfs

KMOD=	tmpfs
SRCS=	vnode_if.h \
	tmpfs_vnops.c tmpfs_fifoops.c tmpfs_vfsops.c tmpfs_subr.c opt_tmpfs.h

.include <bsd.kmod.mk>
