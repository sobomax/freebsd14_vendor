# $FreeBSD: 0a25d0f8e81788778fc4cb2a2bc5f1b3071f95c3 $
# $Whistle: Makefile.inc,v 1.4 1999/01/19 23:46:16 archie Exp $

.PATH:		${SRCTOP}/sys/netgraph

SRCS+=	opt_netgraph.h

.include "../Makefile.inc"
