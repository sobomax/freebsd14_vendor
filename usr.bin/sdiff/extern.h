/*	$OpenBSD: extern.h,v 1.5 2009/06/07 13:29:50 ray Exp $ */
/*	$FreeBSD: 2f240912ddc1219b6c31298fb33fa6bee9f4761b $	*/

/*
 * Written by Raymond Lai <ray@cyth.net>.
 * Public domain.
 */

extern FILE		*outfp;		/* file to save changes to */
extern const char	*tmpdir;

int eparse(const char *, const char *, const char *);
