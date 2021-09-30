# $FreeBSD: 556997404f99b69bc640e5dc3665d704dd5e6350 $

.PATH: ${SRCTOP}/lib/libc/iconv

SHLIB_MAJOR= 4
CFLAGS+= -I${SRCTOP}/lib/libc/iconv

CFLAGS+=	-Dbool=_Bool

.if !defined(COMPAT_32BIT)
SHLIBDIR= /usr/lib/i18n
.else
SHLIBDIR= /usr/lib32/i18n
.endif
LIBDIR=	 ${SHLIBDIR}
MK_PROFILE=	no
