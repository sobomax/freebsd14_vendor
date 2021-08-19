# $FreeBSD: 64f428035700ffae3f8058e5f1719d50297f796f $

PROG=	mount_smbfs
SRCS=	mount_smbfs.c getmntopts.c
MAN=	mount_smbfs.8

MOUNTDIR=	${SRCTOP}/sbin/mount
CONTRIBDIR=	${SRCTOP}/contrib/smbfs
CFLAGS+=	-DSMBFS -I${MOUNTDIR} -I${CONTRIBDIR}/include

LIBADD=	smb

.PATH:	${CONTRIBDIR}/mount_smbfs
.PATH:  ${MOUNTDIR}

.include <bsd.prog.mk>
