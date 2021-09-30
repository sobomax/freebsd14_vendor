/*	$FreeBSD: ea21c052599fdba1fd2388dc8ad173d22e93f52b $	*/

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
extern	int	openkmem __P((char *, char *));
extern	int	kmemcpy __P((char *, long, int));
extern	int	kstrncpy __P((char *, long, int));

#if defined(__NetBSD__) || defined(__OpenBSD)
# include <paths.h>
#endif

#ifdef _PATH_KMEM
# define	KMEM	_PATH_KMEM
#else
# define	KMEM	"/dev/kmem"
#endif

#endif /* __KMEM_H__ */
