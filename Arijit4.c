#include<stdio.h>
#include<math.h>
int main()
{
     float p,r,t,CI;
     printf("Enter the principal amount: ");
     scanf("%f",&p);
     printf("Enter the interest rate: ");
     scanf("%f",&r);
     printf("Enter the time period in years: ");
     scanf("%f",&t);
     printf("The value of simple interest is %f",(p*r*t)/100);
     CI = p*pow(1+r/100,t)-p;
     printf("\nThe value of compound interest is %f",CI);
     return 0;
}