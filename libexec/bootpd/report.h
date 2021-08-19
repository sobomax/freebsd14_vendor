/* report.h */
/* $FreeBSD: 55cec5c76845a4c529485c74f1a890850f6f4b7f $ */

extern void report_init(int nolog);
extern void report(int, const char *, ...) __printflike(2, 3);
extern const char *get_errmsg(void);
