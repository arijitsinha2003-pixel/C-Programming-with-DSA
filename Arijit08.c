#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&b,&c);
    a = pow(b,c);
    printf("The value of %d to the power %d is %d",b,c,a);
    return 0;
}