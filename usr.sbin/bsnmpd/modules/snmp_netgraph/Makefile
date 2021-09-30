# $FreeBSD: 85057c96eb0ae09fb7dd3076129753461c8a7aa4 $
#
# Author: Harti Brandt <harti@freebsd.org>

MOD=	netgraph
SRCS=	snmp_netgraph.c
XSYM=	begemotNg
MAN=	snmp_netgraph.3

BMIBS=	BEGEMOT-NETGRAPH.txt
DEFS=	${MOD}_tree.def
INCS=	snmp_${MOD}.h

LIBADD=	netgraph

.include <bsd.snmpmod.mk>
