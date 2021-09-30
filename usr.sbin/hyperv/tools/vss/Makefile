# $FreeBSD: d6fb6a3ef4821b617cf52199ca3733300e59d938 $
DIRDEPS = lib/libc

.include <bsd.own.mk>

HV_VSS_DAEMON_DISTDIR?= ${SRCTOP}/contrib/hyperv/tools
.PATH: ${HV_VSS_DAEMON_DISTDIR}

PROG= 	hv_vss_daemon
MAN= 	hv_vss_daemon.8

CFLAGS+=	-I${SRCTOP}/sys/dev/hyperv/utilities

.include <bsd.prog.mk>
