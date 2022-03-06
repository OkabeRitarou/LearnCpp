#include <stdio.h>

int main()
{
    int a[5];

    printf("Working Arrays with for\n");
    int i;
    for (i = 0; i < 5 ; ++i){
        a[i] = i*3;
    }
    for (i = 0; i < 5 ; ++i){
        printf("id: %d, number %d \n", i, a[i]);
    }

    printf("\nWorking Arrays with While\n");
    i = 0;
    while (i < 5){
        a[i] = i*2;
        ++i;
    }
    i = 0;
    while (i < 5){
        printf("id: %d, number %d \n", i, a[i]);
        ++i;
    }

    printf("\n");
    return 0;
}
