# $FreeBSD: 5b5633a982e6c48e9a302940c85bb3138f1634a3 $
.PATH:	${SRCTOP}/sys/compat/linuxkpi/common/src

KMOD=	linuxkpi
SRCS=	linux_compat.c \
	linux_current.c \
	linux_hrtimer.c \
	linux_idr.c \
	linux_kmod.c \
	linux_kthread.c \
	linux_lock.c \
	linux_page.c \
	linux_pci.c \
	linux_radix.c \
	linux_rcu.c \
	linux_schedule.c \
	linux_slab.c \
	linux_tasklet.c \
	linux_usb.c \
	linux_work.c

SRCS+=	${LINUXKPI_GENSRCS}

CFLAGS+= -I${SRCTOP}/sys/compat/linuxkpi/common/include
CFLAGS+= -I${SRCTOP}/sys/contrib/ck/include

.include <bsd.kmod.mk>
