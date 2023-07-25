/*
 * $FreeBSD: 2998b7b27cc97fa3126859a6a55ae872c945d70f $
 */

#ifndef LIBMAP_H
#define	LIBMAP_H

int	lm_init(const char *);
void	lm_fini(void);
char	*lm_find(const char *, const char *);
char	*lm_findn(const char *, const char *, const size_t);

#endif
