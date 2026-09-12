// Problem: Reverse a string using recursion.
// Approach: Two pointers (start and end). Swap characters at both ends,
// then recurse inward until the pointers meet or cross.

import java.util.Scanner;

public class ReverseString {

    static void reverseString(char[] str, int start, int end){
        if(start >= end){
            System.out.println("\nreversed string=" + new String(str));
            return;
        }
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        reverseString(str, start+1, end-1);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter string:");
        String input = sc.nextLine();
        char[] str = input.toCharArray();
        int end = str.length - 1;
        reverseString(str, 0, end);
    }
}
