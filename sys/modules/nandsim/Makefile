# $FreeBSD: 4f0aeca9eb4b7acf649abadb6f10bd832707df54 $

.PATH: ${SRCTOP}/sys/dev/nand

KMOD=	nandsim
SRCS=	nandsim.c nandsim_chip.c nandsim_swap.c nandsim_ctrl.c nandsim_log.c\
	bus_if.h device_if.h vnode_if.h nfc_if.h nand_if.h

.include <bsd.kmod.mk>
