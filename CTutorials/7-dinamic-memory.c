#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *a, *b, i;
    p = (int *) malloc(sizeof(int));
    a = (int *) calloc(5, sizeof(int));

    *p = 5;
    printf("%d\n", *p);
    
    a[0] = 5;
    a[1] = 7;
    a[2] = 9;
    a[3] = 11;
    a[4] = 13;

    b = (int *) calloc(5, sizeof(int));
    for (i=0; i < 5; ++i) {
        b[i] = a[i];
    }
    free(a);
    a = (int *) calloc(10, sizeof(int)); 
    for (i=0; i < 5; ++i) {
        a[i] = b[i];
    }

    free(b);
    a[5] = 15;
    a[6] = 17;
    a[7] = 19;
    a[8] = 21;
    a[9] = 23;
    
    for (i=0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    free(p);
    printf("\n");
    return 0;
}
