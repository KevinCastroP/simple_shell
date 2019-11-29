#include "lib.h"
/**
 * execute - function to verify the child process and execute a command
 * @path: recieve the variables
 * @arr: a value
 * @environ: string to calling system
 *
 * Return: a value
 */
int execute(char *path, char **arr, char **environ)
{
	pid_t child_pid;
	int status = 0;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		execve(path, arr, environ);
	}
	else
	{
		wait(&status);
	}
	return (0);
}
