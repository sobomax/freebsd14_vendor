/*	$FreeBSD: c9c89ef6eb0141d0c6353fca8cb0285813c560a5 $	*/

/*
 * Copyright (C) 2012 by Darren Reed.
 *
 * See the IPFILTER.LICENCE file for details on licencing.
 *
 * $Id$
 */

#ifdef	IPFILTER_SCAN

#include <ctype.h>
#include <stdio.h>
#include "ipf.h"
#include "netinet/ip_scan.h"

void
printsbuf(char *buf)
{
	u_char *s;
	int i;

	for (s = (u_char *)buf, i = ISC_TLEN; i; i--, s++) {
		if (ISPRINT(*s))
			putchar(*s);
		else
			PRINTF("\\%o", *s);
	}
}
#else
void printsbuf(char *buf);

void printsbuf(char *buf)
{
#if 0
	buf = buf;	/* gcc -Wextra */
#endif
}
#endif
