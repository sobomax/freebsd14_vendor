# $FreeBSD: 97c2fdedb91d3064567e66b6ddc6d837e3687b67 $
.PATH: ${SRCTOP}/sys/contrib/rdma/krping

KMOD= krping
SRCS= krping.c krping_dev.c getopt.c
SRCS+=	${LINUXKPI_GENSRCS}
SRCS+=  opt_inet.h opt_inet6.h
CFLAGS+= -I${SRCTOP}/sys/ofed/include
CFLAGS+= -I${SRCTOP}/sys/ofed/include/uapi
CFLAGS+= -I${SRCTOP}/sys/compat/linuxkpi/common/include

.include <bsd.kmod.mk>
