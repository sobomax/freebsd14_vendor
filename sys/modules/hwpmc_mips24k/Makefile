#
# $FreeBSD: 2ea54aafe4780a8fde2402cc3dea8fcd08deb90c $
#

.PATH: ${SRCTOP}/sys/dev/hwpmc

KMOD=	hwpmc_mips24k

SRCS=	hwpmc_mod.c hwpmc_logging.c hwpmc_soft.c vnode_if.h
SRCS+=	hwpmc_mips.c

SRCS+=	hwpmc_mips24k.c

.include <bsd.kmod.mk>
