// Problem: Find the maximum element in an array using recursion.
// Approach: Accumulator pattern — carry the "max found so far" forward 
// as a parameter, comparing it against the next element at each step,
// until the last index is reached.

import java.util.Scanner;

public class MaxElement {

    static int findMax(int[] arr, int n, int i, int max){
        if(i == n-1){
            return max;
        }
        if(arr[i+1] > max){
            i++;
            return findMax(arr, n, i, arr[i]);
        }
        else{
            i++;
            return findMax(arr, n, i, max);
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

        int result = findMax(arr, n, 0, arr[0]);
        System.out.print("\nmaximum element is " + result);
    }
}
