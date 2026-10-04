#include<stdio.h>
//function prototype
void namaste();
void bonjour();

//function call
int main(){
    printf("Enter i for indians and f for french: ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i'){
        namaste();
    }else{
        bonjour();
    }
    return 0;
}

//function definition
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}