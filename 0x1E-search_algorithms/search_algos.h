#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>
#include <math.h>


/* MANDATORY TASKS */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* ADVANCED TASKS */
int jump_search(int *array, size_t size, int value);



/* UTILS */
void print_array(int *array, size_t start, size_t end);

#endif
