#
# $FreeBSD: 3def63255fd93bf06311fe8a80f7ddf1c3e8efbb $
#

.include <kmod.opts.mk>

SUBDIR=	\
        ${_tcp_bbr} \
        ${_tcp_rack} \
	${_tcpmd5} \

.if ${MK_EXTRA_TCP_STACKS} != "no" || defined(ALL_MODULES)
_tcp_bbr= 	bbr
_tcp_rack= 	rack
.endif

.if (${MK_INET_SUPPORT} != "no" || ${MK_INET6_SUPPORT} != "no") || \
	defined(ALL_MODULES)
.if ${KERN_OPTS:MIPSEC_SUPPORT} && !${KERN_OPTS:MTCP_SIGNATURE}
_tcpmd5=	tcpmd5
.endif
.endif

.include <bsd.subdir.mk>
