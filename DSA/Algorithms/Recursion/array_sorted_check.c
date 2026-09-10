// Problem: Check if an array is sorted (ascending) using recursion.
// Approach: Compare each element with the next one; if any pair is
// out of order, it's not sorted. Base case: reaching the last index
// means every pair before it was in order.

#include<stdio.h>

int isSorted(int arr[], int n, int i){
    if(i == n-1){
        return 1;
    }
    if(arr[i] > arr[i+1]){
        return 0;
    }
    return isSorted(arr, n, i+1);
}

int main(){
    int n;
    printf("enter size of array:");
    scanf("%d", &n);

    int arr[n];
    printf("\nenter array elements:");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int result = isSorted(arr, n, 0);
    if(result == 1)
        printf("\narray is sorted");
    else
        printf("\narray is not sorted");

    return 0;
}
