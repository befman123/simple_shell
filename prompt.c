#include "shell.h"
/**
 *_prompt_accept - prompts the user with prompt and loops accepting input
 *
 *Return: always null.
 */
ls _prompt_accept(void)
{
	ls ret;
	size_t size;
	char *string;
	int check;

	ret = _initialize();
	printf("$");
	string = NULL;
	size = 0;
	check = getline(&string, &size, stdin);
	if (check != -1)
	{
		ret = _arguments(string, " ");
		free(string);
		return (ret);
	}
	perror(__FILE__);
	return (NULL);
}
