# $FreeBSD: b29befdf9c374f0bb4507a644a56e141046eeefc $

#NO_WERROR=
PROG=	truss
SRCS=	main.c setup.c syscalls.c

LIBADD=	sysdecode

#CFLAGS+= -I${.CURDIR} -I. -I${SRCTOP}/sys
CFLAGS+= -I${SRCTOP}/sys

.include <bsd.prog.mk>
