#include "main.h"
/**
 * print_last_digit - prints the last digits of any number
 * @a: the int value to be acted upon
 * author: jeffersonkaybee
 * Return: returns the last digit to calling function
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return(a);
}
