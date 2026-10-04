#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 91;

    marks[1][0] = 82;
    marks[1][1] = 79;
    marks[1][2] = 80;

    printf("marks:%d\n", marks[0][0]);
    printf("marks:%d\n", marks[0][1]);
    printf("marks:%d\n", marks[0][2]);
    printf("marks:%d\n", marks[1][0]);
    printf("marks:%d\n", marks[1][1]);
    printf("marks:%d\n", marks[1][2]);
    return 0;
}