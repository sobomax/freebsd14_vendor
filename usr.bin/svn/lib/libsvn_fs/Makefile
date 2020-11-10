# $FreeBSD: releng/12.2/usr.bin/svn/lib/libsvn_fs/Makefile 362180 2020-06-14 17:36:43Z dim $

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
