# $FreeBSD: 9431d2f24665fe061b05d7850fcf2cd9e376a93d $

.include <src.opts.mk>

.PATH: ${SRCTOP}/contrib/tcp_wrappers

PROG=	tcpdchk
MAN=	tcpdchk.8
SRCS=	tcpdchk.c fakelog.c inetcf.c scaffold.c

CFLAGS+=-DREAL_DAEMON_DIR=\"${LIBEXECDIR}\" \
	-DSEVERITY=LOG_INFO -DRFC931_TIMEOUT=10 -DPROCESS_OPTIONS \
	-DHOSTS_DENY=\"/etc/hosts.deny\" -DHOSTS_ALLOW=\"/etc/hosts.allow\"
.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+=-DINET6
.endif

WARNS?=	0

LIBADD=	wrap

.include <bsd.prog.mk>
