# $FreeBSD: 0e3888fea8858fda7bc9d8081c21b838870d97ce $

.include <src.opts.mk>

.PATH: ${SRCTOP}/contrib/tcp_wrappers

PACKAGE=	tcpd

PROG=	tcpd
MAN=	tcpd.8
CSTD?=	c89
CFLAGS+=-DREAL_DAEMON_DIR=\"${LIBEXECDIR}\" \
	-DSEVERITY=LOG_INFO -DRFC931_TIMEOUT=10 \
	-DHOSTS_DENY=\"/etc/hosts.deny\" -DHOSTS_ALLOW=\"/etc/hosts.allow\" \
	-DFACILITY=LOG_DAEMON
.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+=-DINET6
.endif

LIBADD=	wrap

WARNS?=	1

.include <bsd.prog.mk>
