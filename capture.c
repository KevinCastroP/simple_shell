#include "lib.h"
/**
 * free_list - function to free a list
 * @path: char pointer
 * Return: nothing
 */
void free_list(char **path)
{
	int pos = 0;

	while (path[pos] != NULL)
	{
		free(path[pos]);
		pos++;
	}
	free(path);
}
/**
 * main - function of Simple Shell project
 * @ac: (void)
 * @argv: (void)
 * @env: (void)
 * Return: a value
 */
int main(int ac __attribute__((unused)), char *argv[] __attribute__((unused)),
	 char *env[])
{
	char *buf = NULL, **arr = NULL, *pat;
	int flag = 0, interactive = 1;
	size_t len = 0;
	ssize_t read;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 0)
			interactive = 0;
		if (interactive == 1)
			_print("$ ");
		read = getline(&buf, &len, stdin);
		if (read == -1)
		{
			if (buf != NULL)
				free(buf);
			buf = NULL;
			return (0);
		}
		if (read > 1 && *buf != 9)
		{
			arr = _toktok(buf);
			pat = _parse_path(env, arr[0], &flag);
			execute(pat, arr, env);
			if (flag == 1)
				free(pat);
			flag = 0;
		}
		if (buf != NULL)
			free(buf);
		if (arr != NULL)
			free(arr);
		buf = NULL;
		arr = NULL;
		pat = NULL;
	}
	return (0);
}
