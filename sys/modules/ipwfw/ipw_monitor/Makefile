# $FreeBSD: 1073a7ac2b8a1d39b81fcf842be2c666416c6dd9 $

.PATH: ${SRCTOP}/sys/contrib/dev/ipw

KMOD=	ipw_monitor
FIRMWS=	ipw_monitor:ipw_monitor:130
FIRMWARE_LICENSE=	intel_ipw

CLEANFILES=	ipw_monitor

ipw_monitor: ipw2100-1.3-p.fw.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}

.include <bsd.kmod.mk>

