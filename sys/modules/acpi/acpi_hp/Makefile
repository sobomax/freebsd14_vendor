# $FreeBSD: e927b9278fe89978b50f7ded67812c6b90bde048 $

.PATH:	${SRCTOP}/sys/dev/acpi_support

KMOD=	acpi_hp
CFLAGS+=-I${SRCTOP}/sys/dev/acpi_support
SRCS=	acpi_hp.c opt_acpi.h acpi_if.h acpi_wmi_if.h device_if.h bus_if.h

.include <bsd.kmod.mk>
