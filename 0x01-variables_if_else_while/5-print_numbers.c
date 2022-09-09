#include <stdio.h>
/**
 * main - entry point
 *
 * Description:  prints all single digit numbers of base 10 starting from 0
 * Return: 0 if successful
 */
int main(void)
{
	int a = 0;
		for (; a < 10 ; a++)
			printf("%d", a);
	putchar('\n');
	return (0);
}
