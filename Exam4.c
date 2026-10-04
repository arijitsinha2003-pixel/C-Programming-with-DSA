/*#include<stdio.h>

int main(){
    int arr[2][3],i,j;
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int arr[2][3],i,j;
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("The transpose of the matrix is:\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>

int main(){
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("Enter the elements of the first matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of the second matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The second matrix is:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("The third matrix is:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0:
}

