#
# $FreeBSD: 8bd63893cc6ab6ee5ec718d6c1348c2da134492a $
#

.include <src.opts.mk>
	
PROG=	flowctl
MAN=	flowctl.8

WARNS?= 2
LIBADD=	netgraph

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif
.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif

.include <bsd.prog.mk>
