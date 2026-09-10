// Problem: Count the number of occurrences of a target element in an array, using recursion.
// Approach: Check if the current element matches; add 1 if it does,
// then add the count from the rest of the array (found recursively).

#include<stdio.h>

int countOccurrences(int arr[], int n, int target, int i){
    if(i == n){
        return 0;
    }
    int countRest = countOccurrences(arr, n, target, i+1);
    if(arr[i] == target)
        return 1 + countRest;
    else
        return countRest;
}

int main(){
    int n;
    printf("enter size of array:");
    scanf("%d", &n);

    int arr[n];
    printf("\nenter array elements:");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int target;
    printf("\nenter target element:");
    scanf("%d", &target);

    int result = countOccurrences(arr, n, target, 0);
    printf("\nelement occurs %d time(s)", result);

    return 0;
}
