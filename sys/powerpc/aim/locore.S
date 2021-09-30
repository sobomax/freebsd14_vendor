/* $FreeBSD: 861536447be100a7604700c8d47c9d3aeb89ea90 $ */

#ifdef __powerpc64__
#include <powerpc/aim/locore64.S>
#else
#include <powerpc/aim/locore32.S>
#endif

/*
 * XXX: This should be moved to a shared AIM/booke asm file, if one ever is
 * created.
 */
ENTRY(get_spr)
	mfspr	%r3, 0
	blr
END(get_spr)
