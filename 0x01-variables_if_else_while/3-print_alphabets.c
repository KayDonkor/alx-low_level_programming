#include <stdio.h>

/**
 * main- prints alphabets in lower case
 * and then in uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
	putchar(alphabet);
	}
putchar('\n');
return (0);
}
