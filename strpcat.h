#ifndef STRPCAT
#define STRPCAT

/*
 *	Concatenates n strings (arg list must be terminated with NULL) to dest.
 *	And returns the address of the terminating '\0' in dest.
 *
 *	eg.: strpcat(str, cat1, cat2, cat3, NULL);
 */

char *strpcat(char *dest, ...);

#endif
