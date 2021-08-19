#ifndef _PRUTIL_H_
#define _PRUTIL_H_

/*
 * $FreeBSD: 3387b994b15131b0e6f81805c6acd2ad3fe6f091 $
 */

struct sched_param;

void quit(const char *);
char *sched_text(int);
int sched_is(int line, struct sched_param *, int);

#endif /* _PRUTIL_H_ */
