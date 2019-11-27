#include "functions.h"
/**
 * _getenv - function that will get the path from a env
 * @name: This will be the name from the env like "PATH"
 * @env: This will take the environ
 * Return: a char * with the path
 */
char *_getenv(char *name, char **env)
{
	char **save = env;
	char **tokenizado;
	int i = 0;

	while (env[i] != NULL)
	{
		save[i] = env[i];
		i++;
	}
	save[i] = NULL;
	i = 0;
	while (save[i] != NULL)
	{
		tokenizado = words(*(save + i), "=");
			if (_strcmp(tokenizado[0], name) == 0)
			{
				break;
			}
		free(tokenizado);
		i++;
	}
	return (tokenizado[1]);
}
