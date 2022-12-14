#include <stdio.h>
/**
*main - print using putchar
*Return: always returns 0
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	
	return (0);
}
