# $FreeBSD: 3a6e571cdc4cbce9a0f0e898dd38471a5f3bb839 $

KMOD=	otusfw_init
FIRMWS=	otusfw_init:otusfw_init:1

CLEANFILES=	otus_init

otusfw_init: ${SRCTOP}/sys/contrib/dev/otus/otus-init
	cp ${.ALLSRC} ${.TARGET}

.include <bsd.kmod.mk>
