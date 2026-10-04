#include<stdio.h>
int main()
{
    int num,sum=0,digit;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    if(num<10000||num>99999){
        printf("Please enter a valid five digit number.\n");
        return 1;
    }
    while (num>0){
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("sum of five digits:%d\n",sum);
    return 0;
}
