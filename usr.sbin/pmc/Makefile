#
# $FreeBSD: releng/12.2/usr.sbin/pmc/Makefile 361929 2020-06-08 15:27:44Z markj $
#

.include <src.opts.mk>
PROG_CXX=	pmc
MAN=	
WARNS?=	3
CXXFLAGS+= -O0
CXXSTD= c++14
CWARNFLAGS.gcc+= -Wno-redundant-decls

# Does not link when built position-independent.
MK_PIE=no

LIBADD=	kvm pmc m ncursesw pmcstat elf

SRCS=	pmc.c pmc_util.c cmd_pmc_stat.c \
	cmd_pmc_list.c cmd_pmc_filter.cc \
	cmd_pmc_summary.cc

.include <bsd.prog.mk>
