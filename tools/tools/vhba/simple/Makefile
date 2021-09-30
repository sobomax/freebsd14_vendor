# $FreeBSD: 5aa9950a6e60db414846b8d072ce5817981f5ef4 $
KMOD=	vsimple
SRCS=	vhba_simple.c vhba.c
CFLAGS += -I${.CURDIR}/.. -DVHBA_MOD=\"vsimple\"
VPATH=	${.CURDIR}/..

.include <bsd.kmod.mk>
