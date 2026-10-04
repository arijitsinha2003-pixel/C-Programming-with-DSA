#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("The size of the integer value is %d and range of interger value from %d to %d",sizeof(int),INT_MIN,INT_MAX);
    printf("\nThe size of the float value is %d and float of interger value from %d to %d",sizeof(float),FLT_MIN,FLT_MAX);
    printf("\nThe size of the double value is %d and range of double value from %d to %d",sizeof(double),DBL_MIN,DBL_MAX);
    return 0;
}
