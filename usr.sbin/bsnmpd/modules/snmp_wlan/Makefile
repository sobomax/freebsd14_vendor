#
# $FreeBSD: eb6b230210e953a6bb13e1fe5bbaa0bf45128715 $
#

MOD=	wlan
SRCS=	wlan_snmp.c wlan_sys.c

XSYM=	begemotWlan

BMIBS=	BEGEMOT-WIRELESS-MIB.txt
MAN=	snmp_${MOD}.3
DEFS=	${MOD}_tree.def

.include <bsd.snmpmod.mk>
