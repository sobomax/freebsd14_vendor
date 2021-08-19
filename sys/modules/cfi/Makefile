# $FreeBSD: 6f8a8af4ab4be7b062a98b3e9ef79de390e3400a $

.PATH: ${SRCTOP}/sys/dev/cfi

KMOD=   cfi
SRCS=   cfi_bus_fdt.c ofw_bus_if.h cfi_core.c cfi_dev.c
SRCS+=  bus_if.h device_if.h opt_cfi.h

opt_cfi.h:
	echo "#define CFI_SUPPORT_STRATAFLASH 1" > ${.TARGET}

.include <bsd.kmod.mk>
