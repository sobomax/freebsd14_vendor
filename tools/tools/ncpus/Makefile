# $FreeBSD: b2683e11527248fc7917b163a21662ce73f7f7ed $

PROG=	ncpus
MAN=
SRCS=	ncpus.c acpi.c
.if ${MACHINE_ARCH} == "amd64" || ${MACHINE_ARCH} == "i386"
SRCS+=	biosmptable.c
.endif
BINDIR=	/usr/local/bin
WARNS?=	6

LIBADD=	devinfo

.include <bsd.prog.mk>
