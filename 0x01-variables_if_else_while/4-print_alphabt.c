#include <stdio.h>

/**
*main - print all letters except e and q
*Return: always return the value 0
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter = 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
