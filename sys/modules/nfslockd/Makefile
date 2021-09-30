# $FreeBSD: 1f6acaa55f2942f7d79da1384e8b3a36ea33e625 $

.PATH: ${SRCTOP}/sys/nlm ${SRCTOP}/sys/rpc
KMOD=	nfslockd
SRCS=	vnode_if.h \
	nlm_advlock.c \
	nlm_prot_clnt.c \
	nlm_prot_impl.c \
	nlm_prot_server.c \
	nlm_prot_svc.c \
	nlm_prot_xdr.c \
	sm_inter_xdr.c
SRCS+=	opt_inet6.h opt_nfs.h

.include <bsd.kmod.mk>
