# $FreeBSD: a9e2e4350a5509bfc482059e49052cefc6b16746 $

.include <bsd.init.mk>

PROG=	crt0.o
INTERNALPROG=
SRCS=	btxcsu.S btxsys.S btxv86.S
CFLAGS+=-I${BOOTSRC}/i386/common
LDFLAGS+=-Wl,-r

.include <bsd.prog.mk>
