// Problem: Reverse a string using recursion.
// Approach: Two pointers (start and end). Swap characters at both ends,
// then recurse inward until the pointers meet or cross.

#include<stdio.h>
#include<string.h>

void reverseString(char str[], int start, int end){
    if(start >= end){
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start+1, end-1);
}

int main(){
    char str[100];
    printf("enter string:");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int end = strlen(str) - 1;
    reverseString(str, 0, end);

    printf("\nreversed string: %s", str);
    return 0;
}
