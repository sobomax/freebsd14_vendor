# $FreeBSD: 024b945dfc6c997419b3acc44ce24f74edf03590 $

.PATH: ${SRCTOP}/sys/compat/lindebugfs

KMOD=	lindebugfs
SRCS=	lindebugfs.c
SRCS+=	${LINUXKPI_GENSRCS}

CFLAGS+= ${LINUXKPI_INCLUDES}

.include <bsd.kmod.mk>
