#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints and that piece..
 * Return: 1 if successful
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}