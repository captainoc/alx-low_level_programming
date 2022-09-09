#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	char a;
		for (a = 'a'; a <= 'z' ; a++)
		{
			if (a == 'q' || a == 'e')
			{
				continue;
			}
		putchar(a);
		}
	putchar('\n');
	return (0);
}
