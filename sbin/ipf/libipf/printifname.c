/*	$FreeBSD: e6a38a8692ad04e68a9a016b9febbcdc30936737 $	*/

/*
 * Copyright (C) 2012 by Darren Reed.
 *
 * See the IPFILTER.LICENCE file for details on licencing.
 *
 * $Id$
 */

#include "ipf.h"


void
printifname(char *format, char *name, void *ifp)
{
	PRINTF("%s%s", format, name);
	if ((ifp == NULL) && strcmp(name, "-") && strcmp(name, "*"))
		PRINTF("(!)");
}
