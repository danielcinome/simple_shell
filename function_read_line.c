#include "functions.h"

char *read_line(ssize_t *c)
{
	char *line = NULL;
	size_t bufsize = 0;

	*c = getline(&line, &bufsize, stdin);
	return (line);
}
