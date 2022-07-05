/*
 * $FreeBSD: a5ba143f211f4986261a79e1c2ebee3a081c8158 $
 */

int	lm_init(const char *);
void	lm_fini (void);
char *	lm_find (const char *, const char *);
char *	lm_findn (const char *, const char *, const size_t);
