#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(void);

int main()
{
    int i, array[10];
    srand(time(NULL));

    for(i = 0; i < 10; ++i) {
        array[i] = random_number();
    }

    for(i = 0; i < 10; ++i) {
        printf("%d \n", array[i]);
    }

    return 0;
}

int random_number(void) {
    return rand() % 1000 + 1;
}
