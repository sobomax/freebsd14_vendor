# $FreeBSD: ef60f8bdb6a95559e3b98e2a85339af332065538 $

.include <bsd.init.mk>

.PATH: ${LDRSRC}

LIB=		uboot_fdt
WARNS?=		2

SRCS=		uboot_fdt.c

# U-Boot library headers
CFLAGS+=	-I${UBOOTSRC}/lib

# libfdt headers
CFLAGS+=	-I${FDTSRC}

# Pick up the bootstrap header for some interface items
CFLAGS+=	-I${LDRSRC}

.include <bsd.lib.mk>
