
# $FreeBSD: b2ebb2430936c0850ba5e6fc8eb6b746b44dd3f6 $

.PATH:	${SRCTOP}/sys/dev/ppbus
KMOD=	ppbus
SRCS=	bus_if.h device_if.h ppbus_if.h ppbus_if.c \
	opt_ppb_1284.h \
	ppb_1284.c ppb_base.c ppb_msq.c ppbconf.c

EXPORT_SYMS=	\
		ppb_request_bus		\
		ppb_release_bus		\
		ppb_get_status		\
		ppb_poll_bus		\
		ppb_reset_epp_timeout	\
		ppb_ecp_sync		\
		ppb_get_epp_protocol	\
		ppb_set_mode		\
		ppb_get_mode		\
		ppb_write		\
		ppb_lock

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
