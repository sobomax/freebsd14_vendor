#	$FreeBSD: 6a33617a46fbb49293dc82b3cc6b2580593476ac $
#

MSDOS=		${SRCTOP}/sys/fs/msdosfs
MSDOS_NEWFS=	${SRCTOP}/sbin/newfs_msdos

.PATH:	${SRCDIR}/msdos ${MSDOS} ${MSDOS_NEWFS}

CFLAGS+= -I${MSDOS} -I${MSDOS_NEWFS}

SRCS+= mkfs_msdos.c
SRCS+= msdosfs_conv.c msdosfs_denode.c msdosfs_fat.c msdosfs_lookup.c
SRCS+= msdosfs_vnops.c msdosfs_vfsops.c
