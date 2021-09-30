# bootpd/Makefile
# $FreeBSD: 6f02477d46671dc97c7ab7458209ca707a8751df $

PROG=	bootpd
CFLAGS+= -DETC_ETHERS
CFLAGS+= -DSYSLOG -DDEBUG -DVEND_CMU

WARNS?=	2

SUBDIR= bootpgw tools

SRCS=	bootpd.c dovend.c readfile.c hash.c dumptab.c \
	 lookup.c getif.c hwaddr.c report.c tzone.c rtmsg.c

MAN=	bootptab.5 bootpd.8
MLINKS=	bootpd.8 bootpgw.8

.include <bsd.prog.mk>
