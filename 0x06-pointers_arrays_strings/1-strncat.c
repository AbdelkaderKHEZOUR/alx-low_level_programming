#include "main.h"

/**
 *  * _strncat - concatenate two strings
 *   * @dst: type char str
 *    * @src: type char str
 *     * @n: number of elements to concatenate in
 *      * Return: pointer to resulting `dest`dest
 */

char *_strncat(char *dst, char *src, int n)
{
	int a, b;

	for (a = 0; dst[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dst[a] = src[b];
	}
	return (dst);
}

