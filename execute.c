#include "lib.h"
/**
 * execute - ...
 * @path: ...
 * @arr: ...
 * @environ: ...
 *
 * Return: ...
 */
int execute(char *path, char **arr, char **environ)
{
	pid_t child_pid;
	int i = 0, status = 0;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		i = execve(path, arr, environ);
		if (i == -1)
		{
			perror("execve");
			return (0);
		}
	}
	else
	{
		while (wait(&status) != child_pid)
			_print("...\n");
	}
	return (0);
}
