#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: always 0
 */
int main(void)
{
int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num + 0);
	}
putchar('\n');
return (0);
}
