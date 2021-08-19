# $FreeBSD: 3f4d48e68a126bc2486dd2e0646bd4983e1b7edc $

.PATH: ${SRCTOP}/sys/contrib/dev/ipw

KMOD=	ipw_ibss
FIRMWS=	ipw_ibss:ipw_ibss:130
FIRMWARE_LICENSE=	intel_ipw

CLEANFILES=	ipw_ibss

ipw_ibss: ipw2100-1.3-i.fw.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}

.include <bsd.kmod.mk>

