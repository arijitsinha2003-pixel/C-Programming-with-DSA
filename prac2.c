// #include<stdio.h>

// int main(){
//     int arr[100],n,i,key,found=0;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     printf("Enter %d elements:\n",n);

//     for(i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Enter the element to be searched: ");
//     scanf("%d",&key);
//     for(i=0;i<n;i++){
//         if(arr[i]==key){
//             printf("The element %d is in the position %d(index %d)",key,i+1,i);
//         }
//     }
//     if(!found == 0){
//         printf("The element %d is not present in the array",key);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int arr[100],n,i,j,temp;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            
            if(arr[j]>arr[j+1]){
            
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
}