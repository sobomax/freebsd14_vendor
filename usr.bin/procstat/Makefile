# $FreeBSD: 03b6cdf933bae85b6a637c19d48b60bb8f6b1a6f $

.include <src.opts.mk>

PROG=	procstat
MAN=	procstat.1
SRCS=	procstat.c		\
	procstat_args.c		\
	procstat_auxv.c		\
	procstat_basic.c	\
	procstat_bin.c		\
	procstat_cred.c		\
	procstat_cs.c		\
	procstat_files.c	\
	procstat_kstack.c	\
	procstat_ptlwpinfo.c	\
	procstat_rlimit.c	\
	procstat_rusage.c	\
	procstat_sigs.c		\
	procstat_threads.c	\
	procstat_vm.c

LIBADD+=	procstat xo util sbuf

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
