# $FreeBSD: 3b819239ef0e882f409c02b75424a814712684ff $

.PATH:	${SRCTOP}/sys/dev/mgb

KMOD	= if_mgb
SRCS	= if_mgb.c
SRCS	+= device_if.h bus_if.h pci_if.h
SRCS	+= ifdi_if.h
SRCS	+= miibus_if.h

#CFLAGS+= -DIFLIB

.include <bsd.kmod.mk>

