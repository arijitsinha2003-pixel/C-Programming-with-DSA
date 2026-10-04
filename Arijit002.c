#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    switch(marks/10){
        case 10: // 100 marks case 
        case 9 : 
        printf("Grade: A\n");
        break;
        case 8:
        printf("Grade: B\n");
        break;
        case 7: 
        printf("Grade");
    }
    return 0;
}