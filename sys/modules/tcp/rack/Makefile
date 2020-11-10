#
# $FreeBSD: releng/12.2/sys/modules/tcp/rack/Makefile 362880 2020-07-01 23:47:51Z tuexen $
#

.PATH: ${.CURDIR}/../../../netinet/tcp_stacks

STACKNAME=	rack
KMOD=	tcp_${STACKNAME}
SRCS=	rack.c sack_filter.c rack_bbr_common.c

SRCS+=	opt_inet.h opt_inet6.h opt_ipsec.h
SRCS+=	opt_tcpdebug.h
SRCS+=	opt_kern_tls.h

#
# Enable full debugging
#
#CFLAGS += -g

CFLAGS+=	-DMODNAME=${KMOD}
CFLAGS+=	-DSTACKNAME=${STACKNAME}

.include <bsd.kmod.mk>
