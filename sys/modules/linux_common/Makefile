# $FreeBSD: releng/12.2/sys/modules/linux_common/Makefile 364712 2020-08-24 17:06:34Z trasz $

.PATH: ${SRCTOP}/sys/compat/linux

KMOD=	linux_common
SRCS=	linux_common.c linux_mib.c linux_mmap.c linux_util.c linux_emul.c \
	linux_errno.c \
	linux.c device_if.h vnode_if.h bus_if.h opt_inet6.h

EXPORT_SYMS=
EXPORT_SYMS+=	linux_emul_path
EXPORT_SYMS+=	linux_errtbl
EXPORT_SYMS+=	linux_ioctl_register_handler
EXPORT_SYMS+=	linux_ioctl_unregister_handler
EXPORT_SYMS+=	linux_get_osname
EXPORT_SYMS+=	linux_get_osrelease

.include <bsd.kmod.mk>
