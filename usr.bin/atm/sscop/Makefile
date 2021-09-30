# $FreeBSD: 491986791282e29d511983a2ed4d51a7900aedfe $

CONTRIB= ${SRCTOP}/contrib/ngatm/sscop

.PATH:	${CONTRIB}

PROG=	sscop
SRCS=	common.c sscop_main.c
CFLAGS+= -I${CONTRIB} -DUSE_LIBBEGEMOT

LIBADD=	begemot ngatm

.include <bsd.prog.mk>
