/*	$NetBSD: fpgetmask.c,v 1.2 2002/01/13 21:45:50 thorpej Exp $	*/

/*
 * Written by J.T. Conklin, Apr 10, 1995
 * Public domain.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 05b151af0d104a85281fa646c7b47e00f29b0875 $");


#include <machine/fsr.h>
#include <ieeefp.h>

fp_except_t
fpgetmask()
{
	unsigned int x;

	__asm__("st %%fsr,%0" : "=m" (x));
	return (FSR_GET_TEM(x));
}
