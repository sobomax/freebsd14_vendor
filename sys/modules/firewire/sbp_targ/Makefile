# $FreeBSD: 2be9c565eca713934e7fb84d5e30bbf120c6ab1d $

# Makefile for the SBP-II Target mode

.PATH: ${SRCTOP}/sys/dev/firewire

KMOD	= sbp_targ
SRCS	= bus_if.h device_if.h \
	  opt_cam.h opt_scsi.h \
	  sbp_targ.c sbp.h \
	  firewire.h firewirereg.h \
	  iec13213.h

.include <bsd.kmod.mk>
