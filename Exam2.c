//Max & Min array 
/*#include<stdio.h>

int main(){
    int arr[100],n,i,max,min;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The maximun element:%d\n",max);
    printf("The minimun element:%d\n",min);
    
    return 0;

}*/

/*#include<stdio.h>

int fibonacci(int n){
    if(n == 0 || n == 1)
    return 1;
    else
    return (fibonacci(n-1) + fibonacci(n-2));
}
    int main(){
        int terms,i;
        printf("Enter the terms: ");
        scanf("%d",&terms);

        if(terms < 0){
            printf("Please enter a positive integer.");
        }else{
            printf("Fibonacci Series:\n");

            for(i=0; i<terms; i++){
                printf("%d ",fibonacci(i));
            }
            printf("\n");
        }
        return 0;
    }*/

//GCD
/*#include<stdio.h>

int gcd(int a,int b){
    if(b == 0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("gcd of %d and %d is %d\n",a,b,gcd(a,b));
    return 0;
}*/

//Palindrome
/*#include<stdio.h>

int main(){
    int num,originalNum,reversedNum=0,remainder;
    printf("Enter a number: ");
    scanf("%d",&num);
    originalNum=num;
    while(num != 0){
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if(originalNum == reversedNum)
    printf("%d is a palindrome number.\n",originalNum);
    else
    printf("%d is not a palindrome number.\n",originalNum);
    return 0;
}*/


//Armstrong

/*#include<stdio.h>
#include<math.h>

int main(){
    int num,originalNum,remainder,n=0;
    double result=0.0;
    printf("Enter a number: ");
    scanf("%d",&num);
    originalNum = num;
    int temp = num;
    while(temp != 0){
        temp/=10;
        n++;
    }
    temp = num;
    while(temp != 0){
        remainder = temp % 10;
        result += pow(remainder,n);
        temp/=10;
    }
    if(originalNum == (int)result)
    printf("%d is an armstrong number.\n",originalNum);
    else
    printf("%d is not an armstrong number.\n",originalNum);
    return 0;
    }*/


//Sum of natural numbers

/*#include<stdio.h>

int main(){
    int n,i,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);

    if(n <= 0){
        printf("Enter a positive number.\n");
    }else{
        for(i=0; i<=n; i++){
            sum += i;
        }
        printf("Sum of first %d natural numbers is:%d\n",n,sum);
    }
    return 0;
}*/

//DECIMAL TO BINARY
/*#include<stdio.h>

void ConvertToBinary(int n){
    int binary[32];
    int i = 0;
    if(n == 0){
        printf("Binary:0\n");
        return;
    }

    while(n > 0){
        binary[i] = n % 2;
        n = n/2;
        i++;
    }
    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d",binary[j]);
    }
    printf("\n");
}
int main(){
    int decimal;
    printf("Enter a decimal: ");
    scanf("%d",&decimal);
    return 0;
}*/

//ROOTS
/*#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c,D;
    printf("Enter three values: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    D = (b*b) - (4*a*c);
    printf("Discriminant(D)=%.2lf\n",D);
    if(D>0){
        printf("The roots are real and distinct.\n");
    }else if(D == 0){
        printf("The roots are real and equal.\n");
    }else{
        printf("The roots are complex and imaginary.\n");
    }
    return 0;
}*/




