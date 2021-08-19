/* $FreeBSD: 5898de7e0e82afed65ae6bbb745e9c3a46f999cf $ */
#define __IEEEFP_NOINLINES__ 1
#include <ieeefp.h>

fp_prec_t fpsetprec(fp_prec_t m)
{
	return (__fpsetprec(m));
}
