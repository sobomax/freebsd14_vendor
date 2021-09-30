#
# $FreeBSD: 8316e6d2d715fba4a97f4dff67c470f78e1e3a42 $
#

.PATH: ${SRCTOP}/sys/dev/hwpmc

KMOD=	hwpmc_mips74k

SRCS=	hwpmc_mod.c hwpmc_logging.c hwpmc_soft.c vnode_if.h
SRCS+=	hwpmc_mips.c

SRCS+=	hwpmc_mips74k.c

.include <bsd.kmod.mk>
