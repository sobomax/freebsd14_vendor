# $FreeBSD: 191a8ad3d5c17c5da69404052fd4e538086f32fb $

.include <src.opts.mk>

SUBDIR=	doc\
	libiberty \
	libbfd \
	libopcodes \
	libbinutils \
	as \
	objdump

# When we use ld.lld as /usr/bin/ld, do not install the non-ifunc-capable
# GNU binutils 2.17.50 ld.
.if ${MK_LLD_IS_LD} == "no"
SUBDIR+=ld
.endif

SUBDIR_DEPEND_libbinutils=libbfd		# for bfdver.h
SUBDIR_DEPEND_as=libbfd libiberty libopcodes
SUBDIR_DEPEND_ld=libbfd libiberty
SUBDIR_DEPEND_objdump=libbfd libiberty libbinutils libopcodes

.if !make(install)
SUBDIR_PARALLEL=
.endif

.include <bsd.subdir.mk>
