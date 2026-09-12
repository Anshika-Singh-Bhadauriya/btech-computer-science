// Problem: Find the first and last occurrence of an element in an array, using recursion.
// Approach: Scan forward for the first match, scan backward for the last match.

import java.util.Scanner;

public class FirstLastOccurrence {

    static int findFirstOccurrence(int[] arr, int n, int target, int i){
        if(i == n)
            return -1;
        if(arr[i] == target)
            return i;
        else
            return findFirstOccurrence(arr, n, target, ++i);
    }

    static int findLastOccurrence(int[] arr, int n, int target, int i){
        if(i == -1)
            return -1;
        if(arr[i] == target)
            return i;
        else
            return findLastOccurrence(arr, n, target, --i);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the size of array:");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("\nenter array elements:");
        for(int i=0; i<n; i++)
            arr[i] = sc.nextInt();

        System.out.print("\nenter target:");
        int target = sc.nextInt();

        System.out.print("\nfirst occurence is " + findFirstOccurrence(arr, n, target, 0));
        System.out.print("\nlast occurence is " + findLastOccurrence(arr, n, target, n-1));
    }
}
