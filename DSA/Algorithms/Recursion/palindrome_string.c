// Problem: Check if a given string is a palindrome using recursion.
// Approach: Compare characters at the start and end indices;
// if they match, recurse inward; if they don't, it's not a palindrome.


import java.util.Scanner;

public class PalindromeCheck {

    static void palindrome(String str, int start, int end){
        if(start >= end){
            System.out.println("\npalindrome");
            return;
        }
        if(str.charAt(start) != str.charAt(end)){
            System.out.println("\nnot palindrome");
            return;
        }
        palindrome(str, start+1, end-1);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter string:");
        String str = sc.next();
        int end = str.length() - 1;
        palindrome(str, 0, end);
    }
}
