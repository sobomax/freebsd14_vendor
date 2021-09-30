# $FreeBSD: 4f148f9d4c46df3d138ccedefb5d68966364e1cb $

#
# Library of internal routines for the print spooler suite.
# Originally these were compiled separately into each program,
# but the library makes it much easier to modularize them.
#
LIB=		lpr
INTERNALLIB=
SRCS=		common.c ctlinfo.c displayq.c matchjobs.c net.c \
		printcap.c request.c rmjob.c startdaemon.c

WARNS?=		1

.include <bsd.lib.mk>
