# $FreeBSD: eda50e222d2e581b7cd2d1d3ba905aa6cd0e8f82 $

.include "../Makefile.inc"

.PATH.c:${HOSTAPD_DISTDIR}

PACKAGE=	hostapd
PROG=	hostapd_cli
SRCS=	cli.c common.c edit.c eloop.c hostapd_cli.c os_unix.c \
	wpa_ctrl.c wpa_debug.c

CFLAGS+= -DCONFIG_CTRL_IFACE
CFLAGS+= -DCONFIG_CTRL_IFACE_UNIX

LIBADD+=	util

MAN=	hostapd_cli.8

.include <bsd.prog.mk>
