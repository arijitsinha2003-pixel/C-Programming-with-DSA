// #include <stdio.h>
// int main()
// {
// int arr[100], size, temp;
// printf("Enter size of array: ");
// scanf("%d", &size);
// printf("Enter elements:\n");
// for (int i = 0; i < size; i++)
// scanf("%d", &arr[i]);
// for (int i = 0; i < size - 1; i++)
// {
// for (int j = 0; j < size - i - 1; j++)
// {
// if (arr[j] > arr[j + 1])
// {
// temp = arr[j];
// arr[j] = arr[j + 1];
// arr[j + 1] = temp;
// }
// }
// }
// printf("sorted array:\n");
// for (int i = 0; i < size; i++)
// printf("%d ", arr[i]);
// return 0;
// }


#include<stdio.h>

int main(){
    int arr[100],n,i,j,temp;

    printf("Enter the number of eleemnts: ");
    scanf("%d",&n);
    printf("Enter %d elemets:\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}