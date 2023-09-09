#include<stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: task8
 *     *
 *      * Return: 0
 */

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
	putchar(digit);

	if (digit == 57)
	digit += 39;
	++digit;
	}
	putchar('\n');
i
	return (0);
}
