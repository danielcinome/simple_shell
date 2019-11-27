#include "functions.h"

char *l_path(char *cont, char **env)
{
	char *value;
	/*char *parameter = "ls";*/
	char *car = "/";
	char *newpath = NULL;
	char **token = NULL;
	int compare = 1;
	int i = 0;
	
	/*char *result = NULL;*/

	value = _getenv("PATH", env);
	token = words(value, ":");
	while (token[i])
        {
               /* newpath = str_concat(token[i], "/");*/
                newpath = str_concat(token[i], car, cont);
                compare = access(newpath, X_OK);
                if (compare == 0)
                {
			/*free(token);*/
			return (newpath);
			/*free(newpath);*/
			break;
                }
                else
                {
			/*free(newpath);*/
                        i++;
                }
        }

	/*while (token[i])
	{
		free(token[i]);
		printf("%s\n", token[i]);
		i++;
	}*/
	free(token);
	/*	result = concatenate(head, cont);*/
	return(cont);
}
