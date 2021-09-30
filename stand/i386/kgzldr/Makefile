# $FreeBSD: 281f1c9f1ba05b9f7430b9810af2060069e2b4c3 $

.include <bsd.init.mk>

PROG=	kgzldr.o
STRIP=
BINMODE=${LIBMODE}
BINDIR=	${LIBDIR}

SRCS=	start.s boot.c subr_inflate.c lib.c crt.s sio.s
CFLAGS=	-Os
CFLAGS+=-DKZIP
NO_SHARED=
LDFLAGS+=-Wl,-r
.PATH:	${SYSDIR}/kern

BOOT_COMCONSOLE_PORT?=	0x3f8
AFLAGS+=--defsym SIO_PRT=${BOOT_COMCONSOLE_PORT}

.include <bsd.prog.mk>
