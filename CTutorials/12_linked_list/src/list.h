#ifndef LIST_H

#define LIST_H

struct Node {
    float value;
    struct Node *next;
};

struct List {
    struct Node *start;
};

struct List *new_list(void);

void add_list(struct List *list, float value);

void show_list(const struct List *list);

void remove_list(struct List *list);

#endif // LIST_H
