# $FreeBSD: 837cfc3b352043fe78838bf5c7ece6cc137f54a3 $

TESTNUM=	sys

CLEANFILES+= test.c

.include <../Makefile.inc>
.include <bsd.lib.mk>

test.c: ../../makesyscalls-fake.sh
	sh ${.CURDIR}/../../makesyscalls-fake.sh /usr/src/sys/kern/syscalls.master > ${.TARGET}
