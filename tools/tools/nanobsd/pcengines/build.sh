#!/bin/sh
#
# $FreeBSD: 525b7ba38398a675d8f68f8508e9c95c0f83e45e $
#

if [ -z "${1}" -o \! -f "${1}" ]; then
  echo "Usage: $0 cfg_file [-bhiknw]"
  echo "-i : skip image build"
  echo "-w : skip buildworld step"
  echo "-k : skip buildkernel step"
  echo "-b : skip buildworld and buildkernel step"
  exit
fi

CFG="${1}"
shift;

sh ../nanobsd.sh $* -c ${CFG}
