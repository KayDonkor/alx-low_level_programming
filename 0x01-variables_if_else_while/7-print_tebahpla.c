#include <stdio.h>

/**
 * main - prints alphabets in reverse order
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet --)
	{
	putchar(alphabet);
	}
putchar('\n');
return (0);
}
