#include "main.h"
/**
 * main - something
 * Return: something
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;
	_putchar("%lu", j);

	for (i = 1; i < 91; i++)
	{
		_putchar(", %lu", k);
		k = k + j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;

	for (i = 92; i < 99; ++i)
	{
		_putchar(", %lu", k1 + (k2 / 1000000000));
		_putchar("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	_putchar("\n");
	return (0);
}
