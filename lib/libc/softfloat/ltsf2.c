/* $NetBSD: ltsf2.c,v 1.1 2000/06/06 08:15:06 bjh21 Exp $ */

/*
 * Written by Ben Harris, 2000.  This file is in the Public Domain.
 */

#include "softfloat-for-gcc.h"
#include "milieu.h"
#include "softfloat.h"

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 8a1e8fa9e50b876a444f0f51171a3b3f11fee939 $");

flag __ltsf2(float32, float32);

flag
__ltsf2(float32 a, float32 b)
{

	/* libgcc1.c says -(a < b) */
	return -float32_lt(a, b);
}
