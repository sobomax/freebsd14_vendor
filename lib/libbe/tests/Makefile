# $FreeBSD: fc5691bbe6f8dee292400074e3795a9469396b21 $

PACKAGE=	tests

ATF_TESTS_SH+= be_create

PROGS=		target_prog
SRCS_target_prog=	target_prog.c
BINDIR_target_prog=	${TESTSDIR}

LIBADD+= zfs \
	spl \
	nvpair \
	be \

CFLAGS+= -I${SRCTOP}/lib/libbe
CFLAGS+= -DIN_BASE -DHAVE_RPC_TYPES
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/include
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/lib/libspl/include/
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/lib/libspl/include/os/freebsd
CFLAGS+= -I${SRCTOP}/sys
CFLAGS+= -I${SRCTOP}/cddl/compat/opensolaris/include
CFLAGS+= -include ${SRCTOP}/sys/contrib/openzfs/include/os/freebsd/spl/sys/ccompile.h
CFLAGS+= -DHAVE_ISSETUGID 

.include <bsd.test.mk>
