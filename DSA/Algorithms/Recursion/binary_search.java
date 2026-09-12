// Problem: Binary search using recursion (array must be sorted).
// Approach: Check the middle element; if it matches, done. Otherwise,
// recurse into only the half that could contain the target.

import java.util.Scanner;

public class BinarySearch {

    static void binarySearch(int[] arr, int start, int end, int target){
        if(start > end){
            System.out.print("\nelement not found");
            return;
        }
        int mid = (start+end)/2;
        if(arr[mid] == target)
            System.out.print("\nelement found at index " + mid);
        else if(arr[mid] > target)
            binarySearch(arr, start, mid-1, target);
        else
            binarySearch(arr, mid+1, end, target);
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

        binarySearch(arr, 0, n-1, target);
    }
}
