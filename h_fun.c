#include "lib.h"

/**
 * _strdup - function that duplicated string.
 * @duplicate: string duplicated.
 * Return: pointer to string.
 */
char *_strdup(char *duplicate)
{
	char *copy;
	int len, i;

	if (duplicate == 0)
		return (NULL);
	for (len = 0; duplicate[len]; len++)
		;
	copy = malloc((len + 1) * sizeof(char));
	for (i = 0; i <= len; i++)
		copy[i] = duplicate[i];
	return (copy);
}

/**
 * _strlen - returns the length of a string.
 * @s: string to count.
 * Return: Always successful.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	for (len = 0; s[len]; len++)
		;
	return (len);
}

/**
 * _print - function tha print string or errors.
 * @str: string to print.
 * Return: string or error.
 */
void _print(char *str)
{
	ssize_t num, len;

	num = _strlen(str);
	len = write(STDERR_FILENO, str, num);
	if (len != num)
	{
		perror("Fatal Frame");
		exit(1);
	}
}

/**
 * _strncmp - function that compares one string with another.
 * @s1: first string.
 * @s2: second string.
 * @n: store the comparison.
 * Return: Always successful.
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	do {
		if (s1[i] != s2[i])
			return (-1);
		i++;
	} while (i != n);
	return (0);
}
