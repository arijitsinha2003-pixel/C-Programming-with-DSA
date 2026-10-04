#include <stdio.h>
int main(){
int i, j, k, num;
for (i = 1; i <= 4; i++){ 
        for (j = 4; j > i; j--){ 
            printf("  ");
        }
        num = i;
        for (k = 1; k <= (2 * i - 1); k++){ 
            printf("%d ", num);
            if (k < i)
                num++; 
            else
                num--; 
        }
        printf("\n");
    }
    return 0;
}
