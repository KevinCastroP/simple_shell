#ifndef LIB_H
#define LIB_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
/*function to get the list of path's*/
char *_parse_path(char *env[], char *pat, int *flag);
/*function to concatenate 2 strings*/
char *_strcat(char *dest, char *src);
/*function of h_func.c*/
char *_strdup(char *duplicate);
unsigned int _strlen(char *s);
void _print(char *str);
int _strncmp(char *s1, char *s2, int n);
int execute(char *path, char **arr, char **environ);
#endif
