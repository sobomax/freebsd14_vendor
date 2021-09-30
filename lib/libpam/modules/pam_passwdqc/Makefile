# $FreeBSD: 2b10fdcae4a90624f433e36d6e07839d2ed535ae $

SRCDIR=	${SRCTOP}/contrib/pam_modules/pam_passwdqc
.PATH: ${SRCDIR}

LIB=	pam_passwdqc
SRCS=	pam_passwdqc.c passwdqc_check.c passwdqc_random.c wordset_4k.c
MAN=	pam_passwdqc.8

WARNS?=	2
CFLAGS+= -I${SRCDIR}

LIBADD+=	crypt

.include <bsd.lib.mk>

