# $FreeBSD: releng/12.2/sys/modules/krpc/Makefile 365356 2020-09-05 02:16:10Z kevans $

.PATH: ${SRCTOP}/sys/rpc
KMOD=	krpc
SRCS=	auth_none.c \
	auth_unix.c \
	authunix_prot.c \
	clnt_bck.c \
	clnt_dg.c \
	clnt_rc.c \
	clnt_vc.c \
	getnetconfig.c \
	rpc_callmsg.c \
	rpc_generic.c \
	rpc_prot.c \
	rpcb_clnt.c \
	rpcb_prot.c \
	replay.c \
	svc.c \
	svc_auth.c \
	svc_auth_unix.c \
	svc_dg.c \
	svc_generic.c \
	svc_vc.c \

SRCS+=	opt_inet6.h

.include <bsd.kmod.mk>
