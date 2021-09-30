/* $FreeBSD: 9c066b149ca222ee1ec601fb6c7153262c57ab7a $ */
#define __IEEEFP_NOINLINES__ 1
#include <ieeefp.h>

fp_rnd_t fpgetround(void)
{
	return __fpgetround();
}
