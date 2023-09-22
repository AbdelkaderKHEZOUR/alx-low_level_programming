#include "main.h"
#include <stdio.h>

/**
 *  * *_strncpy - Function that copies a string.
 *   * @dst: string
 *    * @src: string
 *     * @n: number of chars to copy over
 *      * Return: Always 0.
 */
char *_strncpy(char *dst, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (a != n)
	{
		dst[a] = src[b];

		if (src[a] == '\0')
		{
			dst[b] = '\0';
			break;
		}
		a++;
		b++;
	}
	while (b != n)
		dst[b++] = '\0';
	return (dst);
}
