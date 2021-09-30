# $FreeBSD: a8450067304a0b91adc794cbb5fc0e736ec100eb $

.include "${.CURDIR}/../Makefile.inc"

.PATH:	${SVNDIR}/libsvn_fs_util

INTERNALLIB=	yes
LIB=		svn_fs_util

SRCS=		fs-util.c

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
