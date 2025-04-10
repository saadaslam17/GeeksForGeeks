//{ Driver Code Starts
import java.io.*;
import java.util.*;


// } Driver Code Ends

// User function Template for Java
class Solution {
    int missingNumber(int arr[]) {
        // code here
        
        int n = arr.length;
        
        if (arr[0] != 1) return 1;

        // Check if last number is missing
        if (arr[n - 1] != (n + 1)) return n + 1;
        
        int start = 0;
        int end = n-1;
        
        while(end - start > 1)
        {
            int mid = start + (end-start) / 2;
            
            if(arr[start] - start != arr[mid] - mid)
            {
                end = mid;
            }
            
            else if(arr[end] - end != arr[mid] - mid)
            {
                start = mid;
            }
        }
        
        return arr[start] + 1;
    }
}


//{ Driver Code Starts.

class GfG {

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