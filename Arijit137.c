#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        if(i % 2 != 0){
            if(i % 2 == 0){
                break;
            }
            printf("%d\n",i);
            sum = sum + i;
        }
    }
    printf("The sum of the numbers is: %d\n", sum);
    return 0;
}