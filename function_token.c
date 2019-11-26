#include "functions.h"

char **words(char *line, char *sep)
{
	char **tokens;
	char *word;
	int i = 0, val = 0;
	/*int lenght = _strlen(line);*/

	val = _strlen(line);
	tokens = malloc(sizeof(char *) * val);
	if (tokens == NULL)
		return (NULL);
	word = strtok(line, sep);
	while (word != NULL)
	{
		tokens[i] = word;
		i++;
		word = strtok(NULL, sep);
	}
	tokens[i] = NULL;
	return (tokens);
}
