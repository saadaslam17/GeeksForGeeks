//{ Driver Code Starts
// Initial template for Java
import java.util.*;
import java.io.*;
class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S1 = read.readLine();
            String S2 = read.readLine();
            Solution ob = new Solution();

            System.out.println(ob.areAnagram(S1, S2));
        
System.out.println("~");
}
    }
}
// } Driver Code Ends


// User function template for Java
class Solution {
    static int areAnagram(String S1, String S2) {
        // code here
        if(S1.length() != S2.length())
        {
            return 0;
        }
        
        char tempArray1 [] = S1.toCharArray();
        char tempArray2 [] = S2.toCharArray();
        
        Arrays.sort(tempArray1);
        Arrays.sort(tempArray2);
        
        if(Arrays.equals(tempArray1,tempArray2))
        {
            return 1;
        }
        return 0;
    }
}