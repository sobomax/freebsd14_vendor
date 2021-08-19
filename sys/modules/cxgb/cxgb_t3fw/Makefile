# $FreeBSD: 46fd3fe3ae1ce8a5e85e20ceac2263c87120fbb2 $

CXGB = ${SRCTOP}/sys/dev/cxgb
.PATH: ${CXGB} 

KMOD= cxgb_t3fw
SRCS+= cxgb_t3fw.c
CFLAGS+= -g -I${CXGB}

.include <bsd.kmod.mk>
