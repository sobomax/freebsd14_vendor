#
# $FreeBSD: 0233ad48f8d98317f2c1c78ac8322eb3784e73dd $
#

PROG_CXX=	pmcstat
MAN=	pmcstat.8

LIBADD=	kvm pmc m ncursesw pmcstat elf

SRCS=	pmcstat.c pmcstat.h pmcstat_log.c \
pmcpl_callgraph.c pmcpl_gprof.c pmcpl_annotate.c \
pmcpl_annotate_cg.c pmcpl_calltree.c

.include <bsd.prog.mk>
