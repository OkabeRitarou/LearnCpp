#include <stdio.h>

int main()
{
    int x;
    char *file_path;

    x = 5;
    file_path = "/home/lelouch-lamperouge/file.txt";

    FILE *file;
    file = fopen(file_path, "w"); // mode is r, a, b, w, b+, r+ ,w+, a+
    /*
     * r: READ
     * w: WRITE
     * a: APPEND
     * b: BINARY
     * */
    if (file == NULL) {
        printf("The file text.txt is not open");
        return 1;
    }
    fprintf(file, "Hola archivo nuevo %d", x);
    fflush(file);
    fclose(file);

    printf("Hola Mundo!\n");
    return 0;
}
