# $FreeBSD: b03f93008333437cd8e2b31532029bcdba686d71 $
.PATH:  ${SRCTOP}/sys/dev/mlx4/mlx4_en

KMOD=	mlx4en
SRCS= \
	mlx4_en_cq.c \
	mlx4_en_main.c \
	mlx4_en_netdev.c \
	mlx4_en_port.c \
	mlx4_en_resources.c \
	mlx4_en_rx.c \
	mlx4_en_tx.c
SRCS+=	${LINUXKPI_GENSRCS}
SRCS+=	opt_inet.h opt_inet6.h

CFLAGS+= -I${SRCTOP}/sys/ofed/include
CFLAGS+= -I${SRCTOP}/sys/compat/linuxkpi/common/include

.include <bsd.kmod.mk>
