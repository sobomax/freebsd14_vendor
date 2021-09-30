# $FreeBSD: 2fea81540bc0172591ee04d4e5cfe58947f9e8d7 $

PROG=	ncpus
MAN=
SRCS=	ncpus.c acpi.c
.if ${MACHINE_ARCH} == "amd64" || ${MACHINE_ARCH} == "i386"
SRCS+=	biosmptable.c
.endif
BINDIR=	/usr/local/bin

LIBADD=	devinfo

.include <bsd.prog.mk>
