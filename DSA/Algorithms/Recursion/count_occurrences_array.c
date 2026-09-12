// Problem: Count the number of occurrences of a target element in an array, using recursion.
// Approach: Accumulator pattern — carry a running count forward as a
// parameter, incrementing it whenever the current element matches.

import java.util.Scanner;

public class CountOccurrences {

    static int countOccurrences(int[] arr, int n, int i, int target, int count){
        if(i == n){
            return count;
        }
        if(arr[i] == target){
            count++;
        }
        return countOccurrences(arr, n, i+1, target, count);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter size of array:");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("\nenter array elements:");
        for(int i=0; i<n; i++)
            arr[i] = sc.nextInt();

        int target;
        System.out.print("\nenter target element:");
        target = sc.nextInt();

        int result = countOccurrences(arr, n, 0, target, 0);
        System.out.print("\nelement occurs " + result + " time(s)");
    }
}
