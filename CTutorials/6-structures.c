#include <stdio.h>

struct Point {
    float x;
    float y;
};

struct Person {
    char* name;
    int age;
    float salary;
};

void show_person(const struct Person *person);

int main()
{
    struct Point Point1 = { 0.0f, -12.5f };
    struct Point Point2, Point3;

    Point2.x = 5.0f;
    Point2.y = 3.0f;
    Point3.x = 1.0f;
    Point3.y = 500.f;

    printf("Structs\n");
    printf("Point 1 x: %f, 2: %f \n", Point1.x, Point1.y);
    printf("Point 2 x: %f, 2: %f \n", Point2.x, Point2.y);
    printf("Point 3 x: %f, 2: %f \n", Point3.x, Point3.y);


    struct Person jhon = { "Jhon", 22, 500.f };
    struct Person joan = { "Joan", 33, 1500.f };


    printf("\nStruct with parameters\n");
    show_person(&jhon);
    show_person(&joan);

    return 0;
}

void show_person(const struct Person *person) {
    printf("name: %s", person->name);
    printf("name: %d", person->age);
    printf("name: %f", person->salary);
    printf("\n");
}
