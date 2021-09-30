# $FreeBSD: da61fd519e96152f5ad4a24be824566b5d19317f $

.PATH: ${SRCTOP}/sys/compat/lindebugfs

KMOD=	lindebugfs
SRCS=	lindebugfs.c
SRCS+=	${LINUXKPI_GENSRCS}

CFLAGS+= -I${SRCTOP}/sys/compat/linuxkpi/common/include

.include <bsd.kmod.mk>
