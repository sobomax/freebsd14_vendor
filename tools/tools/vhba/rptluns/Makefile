# $FreeBSD: a7d81fbc07d84ecd5a1f820d9d474fe53e56876d $
KMOD=	vrptluns
SRCS=	vhba_rptluns.c vhba.c
CFLAGS += -I${.CURDIR}/.. -DVHBA_MOD=\"vrptluns\"
VPATH=	${.CURDIR}/..

.include <bsd.kmod.mk>
