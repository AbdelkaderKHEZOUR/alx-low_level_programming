#include<stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * task7
 *     *
 *      * Return: A0
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
	putchar(ch);
	--ch;
	}
	putchar('\n');

	return (0);
}
