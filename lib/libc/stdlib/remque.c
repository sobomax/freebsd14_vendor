/*
 * Initial implementation:
 * Copyright (c) 2002 Robert Drehmel
 * All rights reserved.
 *
 * As long as the above copyright statement and this notice remain
 * unchanged, you can do what ever you want with this file. 
 */
#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 0a2f28f77c7c37936fca8071da2ecddfe26ec78f $");

#define	_SEARCH_PRIVATE
#include <search.h>
#include <stdlib.h>	/* for NULL */

void
remque(void *element)
{
	struct que_elem *prev, *next, *elem;

	elem = (struct que_elem *)element;

	prev = elem->prev;
	next = elem->next;

	if (prev != NULL)
		prev->next = next;
	if (next != NULL)
		next->prev = prev;
}
