# $FreeBSD: 052687381ba64e1f23ffc390bc2cac620fbf83e7 $

.PATH: ${SRCTOP}/sys/netinet
.PATH: ${SRCTOP}/sys/crypto

KMOD=	carp
SRCS=	ip_carp.c sha1.c
SRCS+=	device_if.h bus_if.h vnode_if.h
SRCS+=	opt_carp.h opt_bpf.h opt_inet.h opt_inet6.h opt_ofed.h

.include <bsd.kmod.mk>
