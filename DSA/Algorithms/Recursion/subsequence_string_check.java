// Problem: Check if one string is a subsequence of another, using recursion.
// Approach: Two pointers (one per string). If characters match, advance
// both; if not, advance only the pointer on the larger string.

import java.util.Scanner;

public class IsSubsequence {

    static boolean isSubsequence(String sub, String given, int i, int j){
        if(i == sub.length())
            return true;
        if(j == given.length())
            return false;
        if(sub.charAt(i) == given.charAt(j))
            return isSubsequence(sub, given, i+1, j+1);
        else
            return isSubsequence(sub, given, i, j+1);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the first string:");
        String firststring = sc.nextLine();

        System.out.print("\nenter the second string:");
        String secstring = sc.nextLine();

        boolean result = isSubsequence(secstring, firststring, 0, 0);
        if(result)
            System.out.print("\nsecond string is subsequence of first one");
        else
            System.out.print("\nsecond string is not subsequence of first one");
    }
}
