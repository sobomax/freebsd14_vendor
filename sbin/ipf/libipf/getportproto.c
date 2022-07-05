/*	$FreeBSD: 9f84ab21c476a740cdab5debb2d0d31d3c689a8f $	*/

/*
 * Copyright (C) 2012 by Darren Reed.
 *
 * See the IPFILTER.LICENCE file for details on licencing.
 *
 * $Id$
 */

#include <ctype.h>
#include "ipf.h"

int
getportproto(char *name, int proto)
{
	struct servent *s;
	struct protoent *p;

	if (ISDIGIT(*name)) {
		int number;
		char *s;

		for (s = name; *s != '\0'; s++)
			if (!ISDIGIT(*s))
				return (-1);

		number = atoi(name);
		if (number < 0 || number > 65535)
			return (-1);
		return (htons(number));
	}

	p = getprotobynumber(proto);
	s = getservbyname(name, p ? p->p_name : NULL);
	if (s != NULL)
		return (s->s_port);
	return (-1);
}
