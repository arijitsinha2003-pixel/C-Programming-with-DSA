#include<stdio.h>
#include<limits.h>

int main(){
    int arr[]={25,15,42,36,78,48};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("Smallest element in array is %d\n",smallest);
    printf("Largest element in array is %d\n",largest);

    return 0;
}