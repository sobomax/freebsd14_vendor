# $FreeBSD: ca87371881fb99145600ed7ae8d8ce85eaf7fe42 $

.include <bsd.own.mk>

HV_KVP_DAEMON_DISTDIR?= ${SRCTOP}/contrib/hyperv/tools
.PATH: ${HV_KVP_DAEMON_DISTDIR}

PROG= 	hv_kvp_daemon
MAN= 	hv_kvp_daemon.8

CFLAGS+=	-I${SRCTOP}/sys/dev/hyperv/utilities

.include <bsd.prog.mk>
