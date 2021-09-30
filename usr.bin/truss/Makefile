# $FreeBSD: e6b83a5591fef83b237a2b358034bbd527c34623 $

PROG=	truss
SRCS=	main.c setup.c syscalls.c

LIBADD=	sysdecode

#CFLAGS+= -I${.CURDIR} -I. -I${SRCTOP}/sys
CFLAGS+= -I${SRCTOP}/sys

.include <bsd.prog.mk>
