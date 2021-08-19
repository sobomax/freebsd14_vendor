#
# Filesystem related tools
#
# $FreeBSD: 5f6833723c91d8831046816c07a19aa22202971b $

# mfs
CRUNCH_PROGS_sbin+=	mdmfs mdconfig newfs
CRUNCH_ALIAS_mdmfs=	mount_mfs

# UFS
# CRUNCH_PROGS_sbin+=	fsck_ffs
CRUNCH_LIBS+= -lgeom
CRUNCH_LIBS+= -lufs

# msdos
# CRUNCH_PROGS_sbin+=	mount_msdosfs
# CRUNCH_LIBS+= -lkiconv
