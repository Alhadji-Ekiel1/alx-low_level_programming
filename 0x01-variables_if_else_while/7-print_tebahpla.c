#include <stdio.h>

/**
*main - print the alphabet in reverse
*Return: alwasy returns 0
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar(letter);
	return (0);
}
