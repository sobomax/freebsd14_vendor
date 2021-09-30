# $FreeBSD: b60b26c3e134f4dffd45878ad12df88fa2436681 $

KMOD=	runfw
FIRMWS=	run.fw:runfw:1

CLEANFILES=	run.fw

run.fw: ${SRCTOP}/sys/contrib/dev/run/rt2870.fw.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}

.include <bsd.kmod.mk>
