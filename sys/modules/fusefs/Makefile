# $FreeBSD: 36605fed5d60d03ea6e604e64e239e5f179825ea $

.PATH: ${SRCTOP}/sys/fs/fuse

KMOD=	fusefs
SRCS=	vnode_if.h \
	fuse_node.c fuse_io.c fuse_device.c fuse_ipc.c fuse_file.c \
	fuse_vfsops.c fuse_vnops.c fuse_internal.c fuse_main.c

.include <bsd.kmod.mk>
