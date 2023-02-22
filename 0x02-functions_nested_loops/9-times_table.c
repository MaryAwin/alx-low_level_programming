#include "main.h"

/**
 * times_table - prints 9 times table, starting with 0
 */
void times_table(void);

int main(void)
{
	times_table();
	return (0);
}

void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	printf("9 x %d = %d\n", i, 9 * i);
}
