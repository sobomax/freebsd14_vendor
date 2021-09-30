#
# $FreeBSD: 0ffca5675cb9688e9349ab847065e87fb82ab0c2 $
#

PROG=	bhyvectl
SRCS=	bhyvectl.c
PACKAGE=	bhyve

MAN=	bhyvectl.8

LIBADD=	vmmapi util

WARNS?=	3

CFLAGS+= -I${SRCTOP}/sys/amd64/vmm

.include <bsd.prog.mk>
