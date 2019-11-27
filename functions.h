#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define _POSIX_SOURCE
#define _GNU_SOURCE
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

char *l_path(char *cont, char **env);
char *str_concat(char *s1, char *s2, char *s3);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_getenv(char *name, char **env);
char *read_line(ssize_t *c);
char **words(char *line, char *sep);

#endif
