#include <stdio.h>

/**
 * main - Entry point
 * author:kaybee
 * Return: Always 0 (Success)
 */
int main(void)
{
	int kaybee;

	for (kaybee = 48; kaybee < 58; kaybee++)
	{
		putchar(kaybee);
		if (kaybee != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
