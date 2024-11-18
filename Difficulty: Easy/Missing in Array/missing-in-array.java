//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Geeks {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        for (int g = 0; g < t; g++) {
            String[] str = (br.readLine()).trim().split(" ");
            int arr[] = new int[str.length];
            for (int i = 0; i < str.length; i++) {
                arr[i] = Integer.parseInt(str[i]);
            }
            System.out.println(new Solution().missingNumber(arr));
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java
class Solution {
    int missingNumber(int arr[]) {
        // code here
         int n = arr.length + 1;
         int expectedSum = n * (n + 1) / 2;

        // Calculate the sum of elements in the given array
        int actualSum = 0;
        for (int num : arr) {
            actualSum += num;
        }

        // The missing element is the difference between the expected sum and the actual sum
        return expectedSum - actualSum;
    }
}