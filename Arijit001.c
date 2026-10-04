#include<stdio.h>

int main(){
    //GRADING SYSTEM
    int m;
    printf("Enter a marks: ");
    scanf("%d", &m);
    if(m <= 100 && m >= 90){
        printf("O");
    }
    else if(m <= 89 && m >= 80){
        printf("E");
    }
    else if(m <= 79 && m >= 70){
        printf("A");
    }
    else if(m <= 69 && m >= 60){
        printf("B");
    }
    else if(m <= 59 && m >= 50){
        printf("C");
    }
    else if(m <= 49 && m >= 40){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}