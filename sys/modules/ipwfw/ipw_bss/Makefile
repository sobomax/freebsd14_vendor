# $FreeBSD: 7ae96cd1dea33ab2962939c2b9f63035789627a2 $

.PATH: ${SRCTOP}/sys/contrib/dev/ipw

KMOD=	ipw_bss
FIRMWS=	ipw_bss:ipw_bss:130
FIRMWARE_LICENSE=	intel_ipw

CLEANFILES=	ipw_bss

ipw_bss: ipw2100-1.3.fw.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}

.include <bsd.kmod.mk>

