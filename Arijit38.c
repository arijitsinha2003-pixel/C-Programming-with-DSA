#include <stdio.h>
#define SIZE 10
void multiply(int a[SIZE][SIZE], int b[SIZE][SIZE], int res[SIZE][SIZE], int r1, int c1, int c2){
    for(int i = 0; i < r1; i++)
    for(int j = 0; j < c2; j++){
    res[i][j] = 0;
    for(int k = 0; k < c1; k++)
     res[i][j] += a[i][k] * b[k][j];
    }
}
void transpose(int mat[SIZE][SIZE], int trans[SIZE][SIZE], int rows, int cols){
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            trans[j][i] = mat[i][j];
}

void printMatrix(int mat[SIZE][SIZE], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++)
        printf("%d ", mat[i][j]);
        printf("\n");
    }
}
int main(){
int a[SIZE][SIZE], b[SIZE][SIZE], res[SIZE][SIZE], trans[SIZE][SIZE];
int r1, c1, r2, c2;

printf("Enter size of Matrix A (rows cols): ");
scanf("%d %d", &r1, &c1);
printf("Enter size of Matrix B (rows cols): ");
scanf("%d %d", &r2, &c2);

if(c1 != r2){
    printf("Multiplication not possible.\n");
    return 1;
    }

    printf("Enter Matrix A:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter Matrix B:\n");
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    multiply(a, b, res, r1, c1, c2);

    printf("Resultant Matrix:\n");
    printMatrix(res, r1, c2);

    transpose(res, trans, r1, c2);

    printf("Transpose of Resultant Matrix:\n");
    printMatrix(trans, c2, r1);

    return 0;
}
