# $FreeBSD: a4535e0213d18f88af355752ff2048c1a8f56d9e $

PROG=	ttls1
LDFLAGS+= -L../libxx -lxx -Wl,--rpath=${.OBJDIR}/../libxx
LDFLAGS+= -L../libyy -lyy -Wl,--rpath=${.OBJDIR}/../libyy
MAN=
DEBUG_FLAGS= -g

.include <bsd.prog.mk>
