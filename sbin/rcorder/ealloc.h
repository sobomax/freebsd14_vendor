/*	$FreeBSD: 093ebc3dadc86370eb2e3669c324582f6c7daef1 $	*/
/*	$NetBSD: ealloc.h,v 1.1.1.1 1999/11/19 04:30:56 mrg Exp $	*/

void	*emalloc(size_t len);
char	*estrdup(const char *str);
void	*erealloc(void *ptr, size_t size);
void	*ecalloc(size_t nmemb, size_t size);
