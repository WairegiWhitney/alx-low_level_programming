#include "putchar.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "putchar";
	int i;

	for (i = 0; i < 7; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
