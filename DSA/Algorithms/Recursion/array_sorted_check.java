// Problem: Check if an array is sorted (ascending) using recursion.
// Approach: Compare each element with the next one; if any pair is
// out of order, it's not sorted. Base case: reaching the last index
// means every pair before it was in order.

import java.util.Scanner;

public class ArraySortedCheck {

    static void isSorted(int[] arr, int n, int i){
        if(i == n-1){
            System.out.print("\narray is sorted");
            return;
        }
        else if(arr[i] <= arr[i+1]){
            i++;
            isSorted(arr, n, i);
        }
        else{
            System.out.print("\narray is not sorted");
            return;
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter size of array:");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("\nenter array elements:");
        for(int i=0; i<n; i++)
            arr[i] = sc.nextInt();

        isSorted(arr, n, 0);
    }
}
