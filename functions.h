#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

typedef struct token_s
{
	char *str;
	struct token_s *next;
} token_t;

/*void free_list(token_t *head);
void free_memory(char **grid);*/
char *l_path(char *cont, char **env);
char *str_concat(char *s1, char *s2, char *s3);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_getenv(char *name, char **env);
char *read_line(ssize_t *c);
char **words(char *line, char *sep);

#endif
