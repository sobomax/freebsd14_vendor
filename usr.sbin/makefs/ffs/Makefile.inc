#	$FreeBSD: a1e839fd7ab6605177462e5372d85b4d37e03428 $
#

.PATH:	${SRCDIR}/ffs ${SRCTOP}/sys/ufs/ffs
SRCS+=	ffs_alloc.c ffs_balloc.c ffs_bswap.c ffs_subr.c ufs_bmap.c
SRCS+=	buf.c mkfs.c

# Reach-over source from sys/ufs/ffs
SRCS+=	ffs_tables.c
