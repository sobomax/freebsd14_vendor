# $FreeBSD: 7ef78a91225518e9330d94ea7b43877bdfaf4859 $

KMOD=	otusfw_main
FIRMWS=	otusfw_main:otusfw_main:1

CLEANFILES=	otusfw_main

otusfw_main: ${SRCTOP}/sys/contrib/dev/otus/otus-main
	cp ${.ALLSRC} ${.TARGET}

.include <bsd.kmod.mk>
