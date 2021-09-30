# $FreeBSD: 2097c8e3824aa8b8c9e934f2c7bd3ef43c1d2c29 $

SHLIB_NAME=	bus.so
SRCS=		lang.c

# Set PYTHON to the version to compile against.
# E.g. "python2.7", "python3.6", etc...
PYTHON=	python3.6m

CFLAGS+= -I${.CURDIR}/.. -I/usr/local/include/${PYTHON}
LDFLAGS+= -L/usr/local/lib -l${PYTHON}

.include <bsd.lib.mk>
