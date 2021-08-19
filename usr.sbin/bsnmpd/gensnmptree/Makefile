# $FreeBSD: 52b77f60f2a6430b443d439dab904ecaa557e12b $
#
# Author: Harti Brandt <harti@freebsd.org>

CONTRIB=${SRCTOP}/contrib/bsnmp
.PATH: ${CONTRIB}/gensnmptree

PROG=	gensnmptree
CFLAGS+= -I${CONTRIB}/lib
CFLAGS+= -DQUADFMT='"llu"' -DQUADXFMT='"llx"' -DHAVE_STDINT_H
CFLAGS+= -DHAVE_INTTYPES_H

WARNS?=	5

.include <bsd.prog.mk>
