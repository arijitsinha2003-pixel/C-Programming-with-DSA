#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("The average of %d,%d,%d,%d and %d is %f",a,b,c,d,e,(a+b+c+d+e)/5.0);
    return 0;
}