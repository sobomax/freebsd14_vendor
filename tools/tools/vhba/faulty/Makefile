# $FreeBSD: bbbb158b4102240b4efe8e4b0ff97e544abd7594 $
KMOD=	vfaulty
SRCS=	vhba_faulty.c vhba.c
CFLAGS += -I${.CURDIR}/.. -DVHBA_MOD=\"vfaulty\"
VPATH=	${.CURDIR}/..

.include <bsd.kmod.mk>
