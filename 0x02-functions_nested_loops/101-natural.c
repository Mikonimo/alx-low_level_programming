#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n = 1;
	int result = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			result = result + n;
		n++;
	}
	printf("%d\n", result);
	return (0);
}
