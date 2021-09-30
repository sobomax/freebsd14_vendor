# $FreeBSD: bb6fef4bbd20332165648f5180e4058b4ce8151f $

SYSDIR?=${SRCTOP}/sys

test-dts:
.for dts in ${DTS}
	@env MACHINE=`basename ${.CURDIR}` ${SYSDIR}/tools/fdt/make_dtb.sh ${SYSDIR} ${dts} /tmp
.endfor

test-dtso:
.for dtso in ${DTSO}
	@env MACHINE=`basename ${.CURDIR}` ${SYSDIR}/tools/fdt/make_dtbo.sh ${SYSDIR} ${dtso} /tmp
.endfor
