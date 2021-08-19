# $FreeBSD: 0c03ffb789b91d534b026e85b7aed4a3cfdc276c $

.PATH:	${SRCTOP}/sys/dev/acpi_support

KMOD=	acpi_wmi
CFLAGS+=-I${SRCTOP}/sys/dev/acpi_support
SRCS=	acpi_wmi.c opt_acpi.h acpi_if.h acpi_wmi_if.h device_if.h bus_if.h

.include <bsd.kmod.mk>
