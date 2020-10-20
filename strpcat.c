#include "strpcat.h"

#include <string.h>
#include <stdarg.h>

char *strpcat(char *dest, ...)
{
	size_t len;
	const char *src, *tmp;
	va_list args;

	va_start(args, dest);

	// moves dest pointer to NULL terminator
	while (*dest) dest++;

	// iterates over the function args until arguments NULL terminator
	while ( (src = va_arg(args, const char*)) ) {

		// gets src length
		for (tmp = src; *tmp; ++tmp);
		len = tmp - src;

		// concatenates src to dest and set dest to the new address of NULL char
		dest = memcpy(dest, src, len+1) + len;
	}

	va_end(args);

	// returns address of dest new NULL char
	return dest;
}
