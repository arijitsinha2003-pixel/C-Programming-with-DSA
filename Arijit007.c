#include<stdio.h>
int main(){
    
    
    for(int i = 97; i <= 122; i++){
        if(i % 2 != 0){
            continue;
        }
        printf("%c\n", i);
    }
    return 0;
}