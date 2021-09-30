# $Id: Makefile,v 1.7 2003/08/14 20:06:17 max Exp $
# $FreeBSD: 1d34c4b66af141df72f9aa9cc594d1c1def3af51 $

CONFS=		bluetooth.device.conf
CONFSDIR=	/etc/defaults
PROG=		hccontrol
MAN=		hccontrol.8
SRCS=		send_recv.c link_policy.c link_control.c le.c\
		host_controller_baseband.c info.c status.c node.c hccontrol.c \
		util.c
WARNS?=		2

LIBADD=		bluetooth

.include <bsd.prog.mk>
