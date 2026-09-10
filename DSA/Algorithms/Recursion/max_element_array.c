// Problem: Find the maximum element in an array using recursion.
// Approach: The max is either the current element, or the max of the
// rest of the array — whichever is larger.
//Base case: last element is trivially the max of a one-element array.

#include<stdio.h>

int findMax(int arr[], int n, int i){
    if(i == n-1){
        return arr[i];
    }
    int maxOfRest = findMax(arr, n, i+1);
    if(arr[i] > maxOfRest)
        return arr[i];
    else
        return maxOfRest;
}

int main(){
    int n;
    printf("enter size of array:");
    scanf("%d", &n);

    int arr[n];
    printf("\nenter array elements:");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int result = findMax(arr, n, 0);
    printf("\nmaximum element is %d", result);

    return 0;
}
