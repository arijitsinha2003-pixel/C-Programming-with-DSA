#include<stdio.h>
int main(){
    //GRADING SYSTEM
    float n = n/10;
    printf("Enter the number: ");
    scanf("%f", &n);
    if(n >= 90.0 && n <= 100.0){
        printf("Grade: O\n", n);
    }else if(n >= 80.0 && n <= 89.0){
        printf("Grade: E\n", n);
    }else if(n >= 70.0 && n <= 79.0){
        printf("Grade: A\n", n);
    }else if(n >= 60.0 && n <= 69.0){
        printf("Grade: B\n", n);
    }else if(n >= 50.0 && n <= 59.0){
        printf("Grade: C\n", n);
    }else if(n >= 40.0 && n <= 49.0){
        printf("Grade: D\n", n);
    }else{
        printf("Grade: F\n", n);
    }
    return 0;
}