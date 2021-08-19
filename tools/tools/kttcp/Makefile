#	$FreeBSD: 2f2feb3709bbc470501b60b5718d5f899ba16d14 $

SHELL=	/bin/sh

PROG=	kttcp
SRCS=	kttcp.c
BINDIR?=/usr/local/bin
SYSDIR?=/usr/src/sys

CFLAGS	+= -I${SYSDIR} -Isys

all:	kttcp module

module:
	cd sys; SYSDIR=${SYSDIR} make

install:
	install kttcp ${DESTDIR}/${BINDIR}
	cd sys; SYSDIR=${SYSDIR} make install

clean:
	rm -f ${PROG}
	cd sys; SYSDIR=${SYSDIR} make clean
