/*#include<stdio.h>

int main(){
    int arr[100],n,i;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d\n",&arr[i]);
    }
    printf("The Reversed Array:\n");

    for(i=n-1; i>=0; i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    // Input the size of the matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];

    // Input elements in the matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the transpose
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the transpose
    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*#include<stdio.h>

int main(){
    int arr[100],i,j,n,temp;

    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=0; j=n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/



/*#include<stdio.h>

int isPronic(int num){
    int i;
    for(i = 0; i <= num; i++){
        if(i * (i + 1) == num){
            return 1;
        }
    }
    return 0;
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(isPronic(num)){
        printf("%d is a pronic number.",num);
    }else{
        printf("%d is not a pronic number.\n",num);
    }
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int arr[100],n,i,j,min;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

   for(i=0; i<n-1; i++){
    min = i;
    for(j=i+1; j<n; j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    

   }

   printf("Sorted array:\n");
   for(i=0; i<n; i++){
    printf("%d ",arr[i]);
   }
    
    return 0;
}

    

#include<stdio.h>

int main(){
    int arr[100],n,i,j,temp;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

   for(i=0; i<n; i++){
    
        int temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    

   }

   printf("Sorted array:\n");
   for(i=0; i<n; i++){
    printf("%d ",arr[i]);
   }
    
    return 0;
}*/

/*gcc#include<stdio.h>

int main(){
    int arr[100],n,i,j,temp,min;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            
        }
                temp = arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
    }
    printf("Sorted array:\n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
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
    printf("Matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose Matrix:\n");
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
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("First Matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

printf("Enter the elements of the matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Second Matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

printf("Enter the third matrix is:\n");
for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        c[i][j]=a[i][j]+b[i][j];
        scanf("%d \t",&c[i][j]);
    }
}
for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        c[i][j]=a[i][j]+b[i][j];
        printf("%d \t",c[i][j]);
    }   
    printf("\n");
}
return 0;
}































