/* $FreeBSD: f671c419959e2fa0dc47035baf4b050de3e9ffe7 $ */
/* $srcdir/conf/trap/trap_default.h */
#define MOUNT_TRAP(type, mnt, flags, mnt_data) mount(type, mnt->mnt_dir, flags, mnt_data)
