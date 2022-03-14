#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *p, const void  *q);
int compare_float(const void *p, const void *q);

int main()
{
    int i, size_int, size_float;
    int array_int[] = { 10, 6, -23, 48, 7, 66, 34, 12, -34, -523 };
    float array_float[] = { 34.78f, -7.45f, 90.58f, 3.456f };

    size_int = sizeof(array_int) / sizeof(int) ;
    size_float = sizeof(array_float) / sizeof(float);

    qsort(array_int, size_int, sizeof(int), &compare_int);
    qsort(array_float, size_float, sizeof(float), &compare_float);

    for (i=0; i < size_int; ++i) {
        printf("%d ", array_int[i]);
    }

    printf("\n");
    for (i=0; i < size_float; ++i) {
        printf("%f ", array_float[i]);
    }
    printf("\n");
    return 0;
}

// higher to less
int compare_int(const void *p, const void *q) {
    int x, y;

    x = *(int *) p;
    y = *(int *) q;

    if ( x > y) { return -1; }
    if (x == y) { return 0; }
    return 1;
}

// less to higher
int compare_float(const void *p, const void *q) {
    float x, y;

    x = *(float *) p;
    y = *(float *) q;

    if ( x > y) { return 1; }
    if (x == y) { return 0; }
    return -1;
}
