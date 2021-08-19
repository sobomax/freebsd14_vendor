# $FreeBSD: 03fe93f1c4f5aef886b87ae0e4ea9336dad0a710 $

.PATH:	${SRCTOP}/sys/dev/syscons/logo

KMOD=	beastie_saver
SRCS=	beastie.c logo_saver.c

CFLAGS+=-DBEASTIE_LOGO

.include <bsd.kmod.mk>
