#include "main.h"
/**
  *main - Entry point
  *Desctiption: prints the alphabet 10 times
  *Return: Always 0
  */
int main(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n')
	}
}
