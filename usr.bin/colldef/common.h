/*
 * $FreeBSD: 316490d4eb8de490c733ed42bbdadfddcbf2e077 $
 */

#define CHARMAP_SYMBOL_LEN 64
#define BUFSIZE 80

extern int line_no;

extern u_char charmap_table[UCHAR_MAX + 1][CHARMAP_SYMBOL_LEN];
extern char map_name[FILENAME_MAX];
