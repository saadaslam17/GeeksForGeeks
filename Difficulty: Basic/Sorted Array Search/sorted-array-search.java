//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;

class gfg {

    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());

        while (t-- > 0) {
            String inputLine[] = read.readLine().trim().split(" ");
            int n = inputLine.length;
            int arr[] = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }
            int k = Integer.parseInt(read.readLine());

            Solution obj = new Solution();

            System.out.println(obj.searchInSorted(arr, k));
        }
    }
}
// } Driver Code Ends


class Solution {
    static boolean searchInSorted(int arr[], int k) {
        // Your code here
        int n = arr.length;
        
        int start = 0;
        int end = n-1;
        
        while(start <= end)
        {
            int mid  = start + (end - start) / 2;
            
            if(arr[mid] == k)
            {
                return true;
            }
            
            else if(arr[mid] > k)
            {
                end = mid -1;
            }
            
            else{
                start = mid + 1;
            }
        }
        return false;
    }
}