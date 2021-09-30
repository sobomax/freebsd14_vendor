# $FreeBSD: 0f888b0805b81179141bc0a8601ea65ffe3d1f1a $
. ${srcdir}/emulparams/armelf.sh
. ${srcdir}/emulparams/elf_fbsd.sh
TARGET2_TYPE=got-rel
MAXPAGESIZE=0x8000
GENERATE_PIE_SCRIPT=yes

unset STACK_ADDR
unset EMBEDDED
