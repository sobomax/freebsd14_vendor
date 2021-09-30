/*	$FreeBSD: 6c398d6d39f3989fd10a85894d572eef85cecac8 $	*/

/*
 * Copyright (C) 2012 by Darren Reed.
 *
 * See the IPFILTER.LICENCE file for details on licencing.
 *
 * $Id$
 */

#include "ipf.h"
#include "kmem.h"

int kmemcpywrap(from, to, size)
	void *from, *to;
	size_t size;
{
	int ret;

	ret = kmemcpy((caddr_t)to, (u_long)from, size);
	return ret;
}

