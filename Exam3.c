/*#include<stdio.h>

int main(){
    int arr[100],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Reversed array:\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}*/

//Palindrome
/*#include<stdio.h>

int main(){
    int num,reversedNum=0,remainder,originalNum;
    printf("Enter a number: ");
    scanf("%d",&num);
    originalNum = num;
    while(num != 0){
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if(originalNum == reversedNum){
        printf("%d is a palindrome number.\n",originalNum);
    }else{
        printf("%d is not a palindrome number.\n",originalNum);
    }
    return 0;
}*/


/*#include<stdio.h>

int main(){
    int i,j,space;
    for(i=1; i<=4; i++){
        for(space = 1; space <= 4 - i; space++){
            printf(" ");
        }
        for(j=i; j>=1;j--){
            printf("%d ",j);
        }
        for(j=2; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int num,sum=0,digit;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    if(num < 10000 || num > 99999){
        printf("Please enter a valid five digit number.\n");
        return 1;
    }
   
        while(num > 0){
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        printf("Sum of five digits number is %d\n",sum);
        
        float average = sum / 5.0;
        printf("Average of five digits number is %f\n",average);
    return 0;
}*/

//GCD
/*#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a < 0)a = -a;
    if(b < 0)b = -b;
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD is %d\n",a);
    return 0;
}*/

//Power
/*#include<stdio.h>

int power(int base,int exp){
    int result = 1;
    for(int i = 1; i <= exp; i++){
        result *= base;
    }
    return result;
}

int main(){
    int base,exp,result;
    printf("Enter base and exponent: ");
    scanf("%d %d",&base,&exp);
    if(exp < 0){
        printf("Exponent should be non-negative.\n");
        return 1;
    }
    result = power(base,exp);
    printf("Result is %d\n",result);
    return 0;
}*/






    