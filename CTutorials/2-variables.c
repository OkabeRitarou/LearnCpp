#include <stdio.h>

int main()
{
    int num;
    printf("My number is %d \n", num);
    num = 45;
    printf("My number is %d \n", num);
    
    double num2 = 7.98;
    printf("My number 2 is %lf \n", num2);
    float num3 = 67.67f;
    printf("My number 3 is %f \n", num3);
    int num4 = -64;
    printf("My number 4 is %d \n", num4);
    char character = '@';
    printf("The character is '%c' \n", character);
    char text[11] = "Hola, mundo";
    printf("The string is '%s'", text);

    printf("\n");

    return 0;
}
