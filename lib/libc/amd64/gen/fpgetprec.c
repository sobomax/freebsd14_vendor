/* $FreeBSD: 22d21480566a151b47b3bb4f23c032342b5c7909 $ */
#define __IEEEFP_NOINLINES__ 1
#include <ieeefp.h>

fp_prec_t fpgetprec(void)
{
	return __fpgetprec();
}
