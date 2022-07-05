/*	$FreeBSD: c85d6d3ed69db4b3335a5488c9d312ae39159f44 $	*/

/*
 * Copyright (C) 2012 by Darren Reed.
 *
 * See the IPFILTER.LICENCE file for details on licencing.
 *
 * $Id$
 */
#include "ipf.h"


char	thishost[MAXHOSTNAMELEN];


void initparse(void)
{
	gethostname(thishost, sizeof(thishost));
	thishost[sizeof(thishost) - 1] = '\0';
}
