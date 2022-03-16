#include <stdio.h>
#include "list.h"

int main() {

    struct List *list;
    list = new_list();
    add_list(list, 1.2);
    add_list(list, 3.9);
    add_list(list, 10.5);
    add_list(list, -1.7);
    show_list(list);
    remove_list(list);

    printf("Hello World\n");
}
