#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>


#include <stddef.h>
typedef struct list_w
{
    char *str;
    struct list_w *next;
} list_t;

size_t print_list(const list_t *h);



#endif
