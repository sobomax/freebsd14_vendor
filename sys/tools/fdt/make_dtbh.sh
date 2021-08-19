#!/bin/sh
#
# $FreeBSD: c2d41b6b36d1addd20d485dd7c05d6eed9f9f53d $

# Script generates a $2/fdt_static_dtb.h file.

dtb_base_name=`basename $1 .dts`
echo '#define FDT_DTB_FILE "'${dtb_base_name}.dtb'"' > $2/fdt_static_dtb.h
