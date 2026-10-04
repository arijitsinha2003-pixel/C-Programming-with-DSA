//PALINDROME
/*#include<stdio.h>

int main(){
    int num,originalNum,reversedNum=0,remainder;
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

//ARMSTRONG
/*#include<stdio.h>
#include<math.h>

int main(){
    int num,originalNum,remainder,n=0;
    double result = 0.0;
    printf("Enter a number: ");
    scanf("%d",&num);
    originalNum = num;
    int temp = num;
    while(temp != 0){
        temp /= 10;
        n++;
    }
    temp = num;
    while(temp != 0){
    remainder = temp % 10;
    result += pow(remainder,n);
    temp /= 10;
    }
    if(originalNum == (int)result){
        printf("%d is an armstrong number.\n",originalNum);
    }else{
        printf("%d is not an armstrong number.\n",originalNum);
    }
    return 0;
}*/

//FIBONACCI
/*#include<stdio.h>

int main(){
    int n,i,first=0,second=1,next;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series\n");
    printf("%d \t",first);
    printf("%d \t",second);
    for(i=3; i<=n; i++){
        next = first+second;
        printf("%d \t",next);
        first=second;
        second=next;
    }
    return 0;
}*/

//Fibonacci(rec)
/*#include<stdio.h>

int fibonacci(int n){
    if(n==0 || n==1)
    return 1;
    else
    return (fibonacci(n-1)+fibonacci(n-2));
}

int main(){
    int terms,i;
    printf("Enter the number of terms: ");
    scanf("%d",&terms);
    if(terms < 0){
        printf("Enter a non negative value:\n");
    }else{
        for(i=0; i<terms; i++){
            printf("%d \t",fibonacci(i));
        }
        printf("\n");
    }
    return 0;
}*/

//Roots
/*#include<stdio.h>

int main(){
    double a,b,c,D;
    printf("Enter three value: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    D = (b*b) - (4*a*c);
    printf("Discriminant:%.2lf\ng",D);
    if(D > 0){
        printf("The roots are real and distinct.\n");
    }else if(D == 0){
        printf("The roots are real and equal.\n");
    }else{
        printf("The roots are complex and imaginary.\n");
    }
    return 0;
}*/



#include <stdio.h>

void ConvertToBinary(int n) {
    int binary[32];
    int i = 0;
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);  // Corrected line
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal:\n");
    scanf("%d", &decimal);
    ConvertToBinary(decimal);
    return 0;
}
