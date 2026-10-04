// #include<stdio.h>

// int main(){
//     int arr[100],i,n,key,found=0;

//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     printf("Enter %d elements:\n",n);

//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Enter the elemenet to be searches: ");
//     scanf("%d",&key);

//     for(i=0;i<n;i++){
//         if(arr[i] == key);
//         printf("%d is situated in the %d position(%d index)",key,i+1,i);
//         found=1;
//     }
//     if(!found){
//         printf("The element is not present in the array.");
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int arr[100],n,i,key,found=0;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d",&key);

    for(i=0; i<n; i++){
        if(arr[i]==key){
            printf("The element %d is found at the position %d(index %d)",key,i+1,i);
            found = 1;
        }
    }
    if(!found){
        printf("Element %d is not found in the array",key);
    }
    return 0;
}