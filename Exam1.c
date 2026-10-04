/*#include<stdio.h>

int main(){
    int n,i=1,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n < 0){
        printf("Factorial of a negative number is not defined.\n",n);
    }else{
        do{
            fact*=i;
            i++;
        }while(i<=n);
        printf("Factorial of %d is %d\n",n,fact);
    }
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int n,i,first=0,second=1,next;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    printf("%d \t",first);
    printf("%d \t",second);
    for(i=3; i<=n; i++){
        next = first + second;
        printf("%d \t",next);
        first = second;
        second = next;
    }
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int arr[100], n, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/

/*#include<stdio.h>

int main(){
    int arr[100],n,i,j,temp;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter %d elements",n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);

    }
    for(i=0; i<n-1; i++){
        for(j=0; j <n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/

//Selection

/*#include<stdio.h>

int main(){
    int arr[100],n,i,j,temp,min;

    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter %d elements",n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("Sorted array:\n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int arr[100],n,i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        temp = arr[i];
        j=i-1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("Sorted array:\n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/


/*#include<stdio.h>

int main(){
    int n,i=1,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n < 0){
        printf("Factorial of a negative number is not defined.\n",n);
    }else{
        do{
            fact*=i;
            i++;
        }while(i<=n);
        printf("Factorial of %d is %d\n",n,fact);
    }
    return 0;
}*/

#include<stdio.h>

int main(){
    int n,i,isPrime=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 1){
        printf("%d is not a prime number.\n",n);
        return 0;
    }
    for(i=2; i * i <= n; i++){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime)
    printf("%d is a prime number.\n",n);
    else
    printf("%d is not a prime number.\n",n);
    return 0;
}