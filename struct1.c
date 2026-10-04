#include <stdio.h>

struct student
{

    int age;
    char name[25];
    float sgpa;
};

int main()
{

    struct student s1 = {22, "Arijit", 9.07};

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Name: %f\n", s1.sgpa);

    return 0;
}
