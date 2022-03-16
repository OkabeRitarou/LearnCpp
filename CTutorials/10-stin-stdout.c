#include <stdio.h>

int main()
{
    FILE *file, *file2;
    file = stdout; // stdout point for consol
    fprintf(file, "Hello, file\n");

    int x;

    printf("Enter a number: ");
    file2 = stdin; // recibe enter for keys
    fscanf(file2, "%d", &x);
    
    printf("The value enter is %d\n", x);

    printf("Enter anothr number: ");
    scanf("%d", &x);
    printf("The value enter is %d\n", x);
    return 0;
}
