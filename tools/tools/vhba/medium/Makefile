# $FreeBSD: 091e1399aa3aa57acf3ba101a4d69cdd9ab49aca $
KMOD=	vmedium
SRCS=	vhba_medium.c vhba.c
CFLAGS += -I${.CURDIR}/.. -DVHBA_MOD=\"vmedium\"
VPATH=	${.CURDIR}/..

.include <bsd.kmod.mk>
