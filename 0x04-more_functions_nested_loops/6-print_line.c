#include "main.h"
/**
  * print_line - prints a straight line in the terminal
  * @n: numbe of times to be printed
  *
  */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
