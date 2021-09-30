# $FreeBSD: 8166f481dc998858233f03d018a645e66f125155 $

.include <bsd.init.mk>

.PATH: ${LDRSRC}

LIB=		efi_fdt
WARNS?=		6

SRCS=		efi_fdt.c

# EFI library headers
CFLAGS+=	-I${EFISRC}/include
CFLAGS+=	-I${EFISRC}/include/${MACHINE}

# libfdt headers
CFLAGS+=	-I${FDTSRC}

# Pick up the bootstrap header for some interface items
CFLAGS+=	-I${LDRSRC}

.include <bsd.lib.mk>
