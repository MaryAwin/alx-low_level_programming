#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char lc;
for (lc = 'a' ; lc <= 'z' ; lc++)
{
	putchar(lc);
}
for (lc = 'A' ; lc <= 'Z' ; lc++)
{
	putchar(lc);
}
putchar('\n');
return (0);
}
