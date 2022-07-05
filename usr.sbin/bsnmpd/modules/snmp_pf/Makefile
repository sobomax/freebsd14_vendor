# $FreeBSD: 3ab6e436aa75be0a0c245fe8330f5d205462bf03 $
#
# Author: Philip Paeps <philip@freebsd.org>

MOD=	pf
SRCS=	pf_snmp.c

XSYM=	begemotPf
DEFS=	${MOD}_tree.def
BMIBS=	BEGEMOT-PF-MIB.txt

CFLAGS+=	-I${SRCTOP}/lib/libpfctl -I${OBJTOP}/lib/libpfctl
LIBADD+=	pfctl

.include <bsd.snmpmod.mk>
