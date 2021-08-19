# $FreeBSD: 2ca9e88dde68d03e00ecc81784e339ce4f9b556b $

.PATH: ${SRCTOP}/sys/fs/nfsserver ${SRCTOP}/sys/nfs
KMOD=	nfsd
SRCS=	vnode_if.h \
	nfs_fha.c \
	nfs_fha_new.c \
	nfs_nfsdserv.c \
	nfs_nfsdcache.c \
	nfs_nfsdkrpc.c \
	nfs_nfsdsocket.c \
	nfs_nfsdstate.c \
	nfs_nfsdsubs.c \
	nfs_nfsdport.c \
	opt_ufs.h \
	opt_nfs.h \
	opt_inet.h \
	opt_inet6.h \
	opt_kgssapi.h

.include <bsd.kmod.mk>
