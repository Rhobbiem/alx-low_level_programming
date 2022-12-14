#include "main.c"

/**
 * print alphabet - prints the alphabet
 *
 * Description: print the alphabet in lower case followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
