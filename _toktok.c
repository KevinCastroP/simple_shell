#include "lib.h"
/**
 * _toktok - function to divide the arguments
 * @buf: pointer to a string
 * Return: a variable contain the command
 */
char **_toktok(char *buf)
{
	char **arr, *tok;
	int j = 0;

	arr = malloc(sizeof(char *) * 32);
	tok = strtok(buf, " \n\r\t");

	for (j = 0; tok != NULL; j++)
	{
		arr[j] = tok;
		tok = strtok(NULL, " \n\r\t");
	}
	arr[j] = NULL;
	return (arr);
}
