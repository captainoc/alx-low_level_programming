#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int src_len = 0;

	while (src_len < n && src[src_len])
		++src_len;

	if (src + src_len < dest || dest + n < src)
	{
		for (; src_len; --src_len, --n)
			*dest_end++ = *src++;

		for (; n; --n)
			*dest_end++ = '\0';
	}
	return (dest);
}
