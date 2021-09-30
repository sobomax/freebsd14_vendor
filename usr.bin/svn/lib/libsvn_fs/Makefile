# $FreeBSD: 70810ee4f5253bea4d712ad9875623199906bd2f $

.include "${.CURDIR}/../Makefile.inc"

.PATH:	${SVNDIR}/libsvn_fs

INTERNALLIB=	yes
LIB=		svn_fs

SRCS=		access.c \
		deprecated.c \
		editor.c \
		fs-loader.c

CFLAGS+=	-I${SVNDIR}/include \
		-I${SVNDIR} \
		-I${.CURDIR}/../.. \
		-I${.CURDIR}/../libapr \
		-I${APR}/include/arch/unix \
		-I${APR}/include \
		-I${.CURDIR}/../libapr_util \
		-I${APRU}/include/private \
		-I${APRU}/include

.include <bsd.lib.mk>
