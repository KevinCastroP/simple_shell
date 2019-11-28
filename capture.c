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
	char *buf = NULL, **arr, *pat, *tok;
	int j = 0, flag = 0;
	size_t len = 0;
	ssize_t read;

	while (1)
	{
		arr = malloc(sizeof(char *) * 32);
		_print("$ ");
		read = getline(&buf, &len, stdin);
		if (read == -1)
		{
			free(arr);
			free(buf);
			return (127);
		}
		if (read > 1 && *buf != 9)
		{
			tok = strtok(buf, " \n\r\t");
			for (j = 0; tok != NULL; j++)
			{
				arr[j] = tok;
				tok = strtok(NULL, " \n\r\t");
			}
			arr[j] = NULL;
			pat = _parse_path(env, arr[0], &flag);
			execute(pat, arr, env);

			if (flag == 1)
				free(pat);
			flag = 0;
		}
		free(buf);
		free(arr);
		buf = NULL;
		arr = NULL;
		pat = NULL;
	}
	return (0);
}
