# $FreeBSD: releng/12.2/sys/modules/sctp/Makefile 363079 2020-07-10 14:56:05Z markj $

.PATH: ${SRCTOP}/sys/netinet
.PATH: ${SRCTOP}/sys/netinet6

KMOD=	sctp
SRCS=	sctp_asconf.c \
	sctp_auth.c \
	sctp_bsd_addr.c \
	sctp_cc_functions.c \
	sctp_crc32.c \
	sctp_indata.c \
	sctp_input.c \
	sctp_kdtrace.c \
	sctp_module.c \
	sctp_output.c \
	sctp_pcb.c \
	sctp_peeloff.c \
	sctp_ss_functions.c \
	sctp_syscalls.c \
	sctp_sysctl.c \
	sctp_timer.c \
	sctp_usrreq.c \
	sctp6_usrreq.c \
	sctputil.c

SRCS+=	device_if.h bus_if.h vnode_if.h
SRCS+=	opt_capsicum.h opt_ktrace.h opt_inet.h opt_inet6.h opt_sctp.h

.include <bsd.kmod.mk>
