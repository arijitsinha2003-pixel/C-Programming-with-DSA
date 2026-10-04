#include<stdio.h>
int main()
{
    int x,y,d;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    printf("%d %d\n",x,y);
    d=x;
    x=y;
    y=d;
    printf("The new values of x is %d and y is %d",x,y);
    return 0;
}