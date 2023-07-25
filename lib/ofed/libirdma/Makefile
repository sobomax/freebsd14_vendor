# $FreeBSD: 1280b8a6d7bc7b21e9c9cc0a794dcfd2b320580b $

_spath=	${SRCTOP}/contrib/ofed/libirdma
_ipath=	${SRCTOP}/contrib/ofed/include
lin_inc=/usr/src/sys/compat/linuxkpi/common/include
.PATH: ${_spath}

SHLIBDIR?=	/lib
LIB=		irdma
SHLIB_MAJOR=	1
MK_PROFILE=	no

SRCS= \
irdma_umain.c \
irdma_uverbs.c \
irdma_uk.c \

LIBADD=		ibverbs pthread
CFLAGS+=	-I${_spath} -I${SRCTOP}/contrib/ofed/libibverbs
VERSION_MAP=	${_spath}/libirdma.map
CFLAGS+= -ferror-limit=1000

.include <bsd.lib.mk>
