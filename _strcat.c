#include "lib.h"
/**
 * _strcat - concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * Return: pointer.
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = _strlen(dest);
	size_t i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
