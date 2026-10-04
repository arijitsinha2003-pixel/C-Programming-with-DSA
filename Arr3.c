#include <stdio.h>

int main()
{
    int arr[100], i, n, key, low, high, mid, found=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter %d elements in the sorted order:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("Element %d found at position %d (index %d)\n",key,mid+1,mid);
            found=1;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}
