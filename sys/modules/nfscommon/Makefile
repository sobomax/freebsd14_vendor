# $FreeBSD: 28d658db75fae11c55f82235e985936f9aa971b2 $

.PATH: ${SRCTOP}/sys/fs/nfs
KMOD=	nfscommon
SRCS=	vnode_if.h \
	nfs_commonacl.c \
	nfs_commonkrpc.c \
	nfs_commonport.c \
	nfs_commonsubs.c \
	opt_inet.h \
	opt_inet6.h \
	opt_kgssapi.h \
	opt_nfs.h \
	opt_ufs.h

.include <bsd.kmod.mk>
