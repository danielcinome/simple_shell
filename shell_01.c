#include "functions.h"

int main(int argc, char *argv[], char **env)
{
	char *cont, *result;
	char **tokenizado;
	int status, val_fd = 0, comp = 0, i = 0;
	ssize_t c;
	pid_t hijo;

	while (1)
	{
		hijo = fork();
		if (hijo == -1)
		{
			perror("Error: hijo");
			return (-1);
		}
		val_fd = isatty(STDIN_FILENO);
		if (hijo == 0)
		{
			if (argc == 1)
			{
				write(1, "#cisfun$ ", 10);
				cont = read_line(&c);
				if (c == EOF)
				{
					/*free(cont);*/
					kill(hijo, SIGINT);
					exit(1);
				}
				if (*cont == '\n') /* enter */
				{
					/*free(cont);*/
					return (1);
				}
				tokenizado = words(cont, " \n");
				comp = _strcmp(tokenizado[0], "exit");
				if (comp == 0)
				{
					/*free(tokenizado);
					free(cont);*/
					kill(hijo, SIGINT);
					exit(1);
				}
				comp = _strcmp(tokenizado[0], "env");
				if (comp == 0)
				{
					while (env[i] != NULL)
					{
						write(1, env[i], _strlen(env[i]));
						write(1, "\n", 2);
						i++;
					}
				}
					result = l_path(tokenizado[0], env);
					if (execve(result, tokenizado, NULL) == -1)
					{
						free(result);
						/*free(cont);*/
						free(tokenizado);
						perror(argv[0]);
						if (val_fd == 0)
							kill(hijo, SIGINT);
						return (-1);
					}
			}
		}
		else
		{
			wait(&status);
			if (val_fd == 0)
			{
				write(1, "#cisfun$ ", 10);
				break;
			}
		}
	}
	return (1);
}
