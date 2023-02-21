#include "main.h"

/**
 *main -  Entry point
 *print _putchar followed by a new line.
 * Return: 0 success.
*/

int main(void)
{
	char name[] = "_putchar";
	int x;

	for (x = 0; x <= 7; x++)
	{
		_putchar(name[x]);
	}
	_putchar('\n');
	return (0);
}
