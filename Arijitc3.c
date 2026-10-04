#include <stdio.h>
int main(){
    int i, j, n = 4, a = 0, b = 1, c;
for (i = 0; i < n; i++){ 
        for (j = 0; j <= i; j++){ 
            printf("%d ", a);
            c = a + b; 
            a = b;
            b = c;
        }
        printf("\n");
    }
    return 0;
}
