#include<stdio.h>
int main(){
    int i, n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    printf("\t %d", first);
    printf("\t %d", second);
    for(i=3; i<=n; i++){
        next = first + second;
        printf("\t %d",next);
        first = second;
        second = next;
    }
    return 0;
}