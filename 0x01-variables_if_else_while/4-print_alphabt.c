#include <stdio.h>

/**
 * main- prints alphabets in lower case except q and e
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	if (alphabet != 'q' && alphabet != 'e')	
        {
	putchar(alphabet);
	}
putchar('\n');
return (0);
}
