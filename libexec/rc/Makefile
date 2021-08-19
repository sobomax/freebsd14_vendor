# $FreeBSD: 2e28f86153fb369c38ca705f46ecf71e4e1bb8e1 $

CONFGROUPS=	CONFETC CONFETCEXEC CONFETCDEFAULTS
CONFETCDIR=	/etc
CONFETC=	network.subr rc rc.initdiskless rc.subr rc.shutdown
CONFETCMODE=	644
CONFETCEXEC=	netstart pccard_ether rc.resume rc.suspend
CONFETCEXECDIR=	/etc
CONFETCEXECMODE=	755
CONFETCDEFAULTSDIR=	/etc/defaults
CONFETCDEFAULTS=	rc.conf
#PACKAGE=rc

SUBDIR+=	rc.d

.include <bsd.prog.mk>
