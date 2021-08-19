/* $FreeBSD: 51b609b48eafd5d3ec3bcbf7fe390c946188733f $ */

#define	DEBUG	1	/* enable debugging code (needed for dig) */
#define	RESOLVSORT	/* allow sorting of addresses in gethostbyname */
#undef	SUNSECURITY	/* verify gethostbyaddr() calls - WE DON'T NEED IT  */
#define MULTI_PTRS_ARE_ALIASES 1 /* fold multiple PTR records into aliases */
