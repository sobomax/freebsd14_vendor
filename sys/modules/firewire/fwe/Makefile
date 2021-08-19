# $FreeBSD: 8632ab2e16c5bb009d5e0b0f128e651bda82f776 $

# Makefile for the fwe(4) module (Ethernet over IEEE1394)

.PATH: ${SRCTOP}/sys/dev/firewire

KMOD	= if_fwe
SRCS	= bus_if.h device_if.h \
	  opt_inet.h \
	  if_fwe.c if_fwevar.h \
	  firewire.h firewirereg.h
#CFLAGS += -DDEVICE_POLLING

.include <bsd.kmod.mk>
