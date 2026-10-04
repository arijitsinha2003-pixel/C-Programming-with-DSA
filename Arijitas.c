#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 5; i <= 50; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("The sum of the numbers is %d\n", sum);
    return 0;
}