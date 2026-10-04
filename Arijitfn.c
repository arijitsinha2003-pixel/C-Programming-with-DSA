#include<stdio.h>
int main(){
    char ch;
    int sum = 0;
    for(int i = 97; i <= 122; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%c\n", i);
        sum = sum + i;
    }
    printf("The sum of these numbers:%d\n", sum);
    return 0;
}