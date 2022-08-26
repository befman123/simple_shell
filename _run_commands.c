#include "shell.h"
#include <sys/types.h>
#include <sys/wait.h>
/**
 *_run - runs commands as they are passed
 *
 *Return: 0 if success 1 if not
 */
int _run(char *const pathname, char *argv[])
{
	pid_t pid;
	int status;

	status = 0;
	if ((pid = fork()) == 0)
	{
		if (execve(pathname, argv, NULL) == -1)
	       	{
			perror(argv[0]);
		}
	}
	if (pid == -1)
	{
		perror(__FILE__);
	}
	else
	{
		pid = wait(&status);
		return(0);
	}
	return (0);
}
