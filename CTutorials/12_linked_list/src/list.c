#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct List *new_list(void)
{
    struct List *list;
    list = (struct List *) malloc(sizeof(struct List));
    list->start = NULL;
    return list;
}

void add_list(struct List *list, float value)
{
    struct Node *node, *last_no_null;
    if (list->start == NULL) {
        list->start = (struct Node *) malloc(sizeof(struct Node));
        list->start->value = value;
        list->start->next = NULL;
        return;
    }
    node = list->start;
    while(node != NULL){
        last_no_null = node;
        node = node->next;
    }

    last_no_null->next = (struct Node *) malloc(sizeof(struct Node));
    last_no_null->next->next = NULL;
    last_no_null->next->value = value;
}

void show_list(const struct List *list)
{
    struct Node *node;
    for ( node = list->start; node != NULL; node = node->next) {
        printf("%f ", node->value);
    }
    printf("\n");
}

void remove_list(struct List *list)
{
    if (list->start == NULL || list->start->next == NULL) {
        return;
    }
    struct Node *node, *last_no_null, *p;
    node = list->start;

    while (node != NULL) {
        p = last_no_null;
        last_no_null = node;
        node = node->next;
    }
    free(last_no_null);
    p->next = NULL;

    remove_list(list);
}

