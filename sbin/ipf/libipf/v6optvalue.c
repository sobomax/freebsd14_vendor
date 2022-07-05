/*	$FreeBSD: c0d13bc51d85f6c8ba185ce5ea1803bc76fd0cfe $	*/

/*
 * Copyright (C) 2012 by Darren Reed.
 *
 * See the IPFILTER.LICENCE file for details on licencing.
 *
 * $Id$
 */
#include "ipf.h"



u_32_t getv6optbyname(char *optname)
{
#ifdef	USE_INET6
	struct ipopt_names *io;

	for (io = v6ionames; io->on_name; io++)
		if (!strcasecmp(optname, io->on_name))
			return (io->on_bit);
#endif
	return (-1);
}


u_32_t getv6optbyvalue(int optval)
{
#ifdef	USE_INET6
	struct ipopt_names *io;

	for (io = v6ionames; io->on_name; io++)
		if (io->on_value == optval)
			return (io->on_bit);
#endif
	return (-1);
}
