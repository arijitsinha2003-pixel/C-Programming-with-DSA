#include<stdio.h>
int main(){
    int n, i, count = 0, num = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i = 1; count < n; num++){
        if(num % 7 == 0){
            printf("%d ", num);
            count++;
        }
    }
    printf("\n");
    return 0;
}