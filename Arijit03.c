#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter a value of temperature in degree F: ");
    scanf("%f",&f);
    printf("The value of the teamperature in degee C is %f",c=(5.0/9.0)*(f-32));
    printf("\nEnter a value of temperature in degee C: ");
    scanf("%f",&c);
    printf("The value of the teamperature in degee F is %f",f=(9.0/5.0)*c+32);
    return 0;
}