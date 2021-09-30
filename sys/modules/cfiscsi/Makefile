# $FreeBSD: 8dd4567c6c7a352add9086c4cb4e8edab6cc94fa $

.PATH: ${SRCTOP}/sys/cam/ctl

KMOD=	cfiscsi

#CFLAGS+=-DICL_KERNEL_PROXY

MFILES=	dev/iscsi/icl_conn_if.m
SRCS=	ctl_frontend_iscsi.c icl_conn_if.h

.include <bsd.kmod.mk>
