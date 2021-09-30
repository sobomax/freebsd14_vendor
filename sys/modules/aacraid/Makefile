# $FreeBSD: 8bbe1d7db708c9d88193f60e7bfbd57a3f075a77 $

.PATH: ${SRCTOP}/sys/dev/aacraid

.if ${MACHINE_CPUARCH} == "i386"
SUBDIR= aacraid_linux
.endif

KMOD=	aacraid
SRCS=	aacraid.c aacraid_pci.c aacraid_cam.c
.if ${MACHINE_CPUARCH} == "powerpc"
SRCS+=	aacraid_endian.c
.endif
SRCS+=	opt_scsi.h opt_cam.h opt_aacraid.h
SRCS+=	device_if.h bus_if.h pci_if.h

# To enable debug output from the driver, uncomment these two lines.
#CFLAGS+= -DAACRAID_DEBUG=2
#SRCS+=	aacraid_debug.c

.include <bsd.kmod.mk>
