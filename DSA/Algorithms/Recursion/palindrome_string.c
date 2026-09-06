// Problem: Check if a given string is a palindrome using recursion.
// Approach: Compare characters at the start and end indices;
// if they match, recurse inward; if they don't, it's not a palindrome.

#include<stdio.h>
#include<string.h>

void palindrome(char str[], int start, int end){
    if(start >= end){
        printf("\npalindrome");
        return;
    }
    if(str[start] != str[end]){
        printf("\nnot palindrome");
        return;
    }
    palindrome(str, start+1, end-1);
}

int main(){
    char str[100];
    printf("enter string:");
    scanf("%s", str);
    int end = strlen(str) - 1;
    palindrome(str, 0, end);
    return 0;
}
