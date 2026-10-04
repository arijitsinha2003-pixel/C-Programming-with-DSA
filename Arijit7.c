#include<stdio.h>
int main()
{
    int radius;
    float pi = 3.14;
    printf("Enter a radius: ");
    scanf("%d",&radius);
    printf("The area and circumference of a circle with radius %d are %f and %f",radius,pi*radius*radius,2*pi*radius);
    return 0;
}