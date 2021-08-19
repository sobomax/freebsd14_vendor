# $FreeBSD: 76bf879f609604564837e71076ec8e6f326a8945 $

_spath=	${SRCTOP}/contrib/ofed/infiniband-diags
.PATH: ${_spath}/src ${_spath}/man

BINDIR?= /usr/bin
SRCS+= ibdiag_common.c ibdiag_sa.c
CFLAGS+= -I${SYSROOT:U${DESTDIR}}/${INCLUDEDIR}/infiniband
CFLAGS+= -DHAVE_CONFIG_H=1
CFLAGS+= -I${_spath} -I${_spath}/src
LIBADD+= osmcomp ibmad ibumad

