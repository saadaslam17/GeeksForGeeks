//{ Driver Code Starts


import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int N = Integer.parseInt(br.readLine().trim());
            Solution ob = new Solution();
            int[] ans = ob.AllPrimeFactors(N);
            for(int i = 0; i < ans.length; i++)
                System.out.print(ans[i] + " ");
            System.out.println();
        }
    }
}

// } Driver Code Ends




class Solution
{
    public int[] AllPrimeFactors(int N)
    {
        // code here
       ArrayList<Integer> list = new ArrayList<>();

        for(int i = 2; i <= N; i++)
        {
            if(N % i == 0)
            {
                if(isPrime(i))
                {
                    list.add(i);

                }
                
            }
            
        }
        int n = list.size();
        int [] arr = new int[n];
        
        for(int i = 0 ;i < list.size();i++){
            arr[i] = list.get(i);
        }
        
        
        return arr;
        
        
    }
    boolean isPrime(int n) {
        // code here
        if(n == 0 || n == 1)
        {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
    
        
        