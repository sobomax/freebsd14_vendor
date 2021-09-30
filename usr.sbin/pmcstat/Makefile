#
# $FreeBSD: fa3c8948a7f9d0a57d13234fdfc02488cf46e012 $
#

PROG_CXX=	pmcstat
MAN=	pmcstat.8

CFLAGS+= -I${SRCTOP}/lib/libpmcstat
LIBADD=	kvm pmc m ncursesw pmcstat elf

SRCS=	pmcstat.c pmcstat.h pmcstat_log.c \
pmcpl_callgraph.c pmcpl_gprof.c pmcpl_annotate.c \
pmcpl_annotate_cg.c pmcpl_calltree.c

.include <bsd.prog.mk>
