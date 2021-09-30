/* $FreeBSD: 6f13367510d6d48fe7d4517557804d6dd77fdc4f $ */
#define __IEEEFP_NOINLINES__ 1
#include <ieeefp.h>

fp_rnd_t fpsetround(fp_rnd_t m)
{
	return (__fpsetround(m));
}
