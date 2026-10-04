//#include <stdio.h>

//int main() {
   // int n = 5; 
   // for (int i = 1; i <= n; i++) {
       // for (int j = n; j > i; j--){
        //    printf("  ");
       // }
       // for (int j = i; j >= 1; j--){
        //    printf("%d ", j);
       // }
     //   for (int j = 2; j <= i; j++){
       //     printf("%d ", j);
       // }
       // printf("\n"); 
    //}
   // return 0;
//}

#include<stdio.h>

float convertTemp(float far);

int main(){
    float celcius = convertTemp(98.6);
    printf("celcius: %f\n",celcius);
    return 0;
}

float convertTemp(float far){
    float celcius = 5*(far - 32)/9;
    return celcius;
}