#include <stdio.h>
/**
 * main - program compilation begins from main
 * author: jeffersonkaybee
 * Return: Always 0 (Success);
 */
int main(void)
{
	int a, b;

	for (a = 44; a <= 57; a++)
	{
		for (b = 45; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a != b && b > a)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
