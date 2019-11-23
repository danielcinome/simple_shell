#include "functions.h"

char *l_path(char *cont, char **env)
{
	char *value;
	char **token;
	token_t *head;
	int i = 0;
	char *result = NULL;

	value = _getenv("PATH", env);
	token = words(value, ":");
	head = NULL;
	while (token[i])
	{
		add_nodeint_end(&head, token[i]);
		i++;
	}
		result = concatenate(head, cont);
	return(result);
}
