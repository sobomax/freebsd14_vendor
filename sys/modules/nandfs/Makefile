# $FreeBSD: f13858c57c7b2d627f0e1b909d76eed6d14b9ccf $

.PATH: ${SRCTOP}/sys/fs/nandfs

KMOD=	nandfs
SRCS=	vnode_if.h opt_ddb.h \
	bmap.c nandfs_bmap.c nandfs_dir.c nandfs_subr.c nandfs_vfsops.c \
	nandfs_vnops.c nandfs_alloc.c nandfs_cpfile.c nandfs_dat.c \
	nandfs_ifile.c nandfs_segment.c nandfs_sufile.c nandfs_buffer.c \
	nandfs_cleaner.c

.include <bsd.kmod.mk>
