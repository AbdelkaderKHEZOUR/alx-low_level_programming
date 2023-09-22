#include "main.h"

/**
 * *rot13 - a program that encodes a string using rot13
 * *@s: a string for encoding
 * *Return: address of s
 */
char *rot13(char *s)
{
	int a;
	int b;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == data1[b])
			{
				s[a] = datarot[b];
				break;
			}
		}
	}
	return (s);
}
