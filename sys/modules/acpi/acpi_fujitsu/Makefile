# $FreeBSD: 9c21c4b6118c6b3d89cd87944dd88a9e06dde90a $

.PATH:	${SRCTOP}/sys/dev/acpi_support

KMOD=	acpi_fujitsu
CFLAGS+=-I${SRCTOP}/sys/dev/acpi_support
SRCS=	acpi_fujitsu.c opt_acpi.h acpi_if.h device_if.h bus_if.h

.include <bsd.kmod.mk>
