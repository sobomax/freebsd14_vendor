/*	$FreeBSD: bcf6a0be7e27f23915cb7a5b5aa24ac95e1a43e6 $	*/

/*
 * Copyright (C) 2012 by Darren Reed.
 *
 * See the IPFILTER.LICENCE file for details on licencing.
 * $Id$
 */

#ifndef	__KMEM_H__
#define	__KMEM_H__

#ifndef	__P
#  define	__P(x)	x
#endif
extern	int	openkmem(char *, char *);
extern	int	kmemcpy(char *, long, int);
extern	int	kstrncpy(char *, long, int);

#if defined(__NetBSD__)
# include <paths.h>
#endif

#ifdef _PATH_KMEM
# define	KMEM	_PATH_KMEM
#else
# define	KMEM	"/dev/kmem"
#endif

#endif /* __KMEM_H__ */
