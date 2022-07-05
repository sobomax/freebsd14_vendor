# $FreeBSD: 0e25b78c6e4fef28d496042aa3d9f5f635bc5023 $

.PATH:		${SRCTOP}/sys/dev/smbus
KMOD		= smbus
SRCS		= device_if.h bus_if.h smbus_if.h smbus_if.c \
		  smbconf.h smbconf.c smbus.h smbus.c

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
