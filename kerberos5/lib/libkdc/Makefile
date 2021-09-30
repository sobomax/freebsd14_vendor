#$FreeBSD: 24267a8dd4199b3a110303a3189144eb9df99762 $

LIB=	kdc
LDFLAGS=	-Wl,--no-undefined
VERSION_MAP= ${KRB5DIR}/kdc/version-script.map
LIBADD=	roken hdb hx509 krb5 heimntlm asn1 crypto

INCS=	kdc.h \
	kdc-protos.h

KRB5INCS=	windc_plugin.h
KRB5INCSDIR=	${INCLUDEDIR}/krb5
INCSGROUPS=	INCS KRB5INCS

SRCS=	\
	default_config.c \
	set_dbinfo.c \
	digest.c \
	kerberos5.c \
	krb5tgs.c \
	pkinit.c \
	log.c \
	misc.c \
	kx509.c \
	process.c \
	windc.c

CFLAGS+=	-I${KRB5DIR}/lib/roken \
		-I${KRB5DIR}/lib/krb5 \
		-I${KRB5DIR}/lib/hdb \
		-I${KRB5DIR}/kdc \
		-I${SRCTOP}/contrib/com_err

.include <bsd.lib.mk>

.PATH: ${KRB5DIR}/kdc
