# $FreeBSD: 7da5dd2fde0b2bd590d4ab3d4dee4ab32d6c01a3 $

.PATH: ${SRCTOP}/sys/dev/usb/wlan

KMOD    = if_upgt
SRCS    = if_upgt.c if_upgtvar.h	\
	  bus_if.h device_if.h \
	  opt_bus.h opt_usb.h opt_wlan.h usb_if.h usbdevs.h

.include <bsd.kmod.mk>
