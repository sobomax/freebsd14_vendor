#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 66cf40e61ec9a2b2e4427cdf6c94bb648d9b4651 $");

/*
 * Tell <ctype.h> to generate extern versions of all its inline
 * functions.  The extern versions get called if the system doesn't
 * support inlines or the user defines _DONT_USE_CTYPE_INLINE_
 * before including <ctype.h>.
 */
#define _EXTERNALIZE_CTYPE_INLINES_

/*
 * Also make sure <runetype.h> does not generate an inline definition
 * of __getCurrentRuneLocale().
 */
#define __RUNETYPE_INTERNAL

#include <ctype.h>
