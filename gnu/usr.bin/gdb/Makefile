# $FreeBSD: c9564c232a3c705f3d02348aef98e286ac398e36 $

.include <src.opts.mk>

SUBDIR=	libgdb gdb kgdb

.if ${MK_GDB_LIBEXEC} == "no"
.if exists(${.CURDIR}/gdbserver/reg-${MACHINE_CPUARCH}.c)
SUBDIR+=gdbserver
.endif
.endif

.include <bsd.subdir.mk>
