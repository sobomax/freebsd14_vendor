# $FreeBSD: 9e98412f6f74cbb2329b0fee0d303edec7ddf1b2 $
EFIBOOT=${SRCTOP}/stand/efi
EFIINCL=${SRCTOP}/stand/efi/include
EFIVAR=${SRCTOP}/usr.sbin/efivar
.PATH: ${EFIBOOT}/libefi ${EFIVAR}
CFLAGS+= -I${EFIVAR} -I${EFIINCL}

PACKAGE=	efi-tools

PROG=efibootmgr
MAN=	efibootmgr.8
SRCS= efichar.c efiutil.c efibootmgr.c

LIBADD= efivar geom

.include <bsd.prog.mk>
