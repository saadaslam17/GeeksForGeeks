// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int copy = n;
        int sum = 0;
        
        while(copy > 0)
        {
            int rem = copy % 10;
            rem = pow(rem,3);
            sum = sum + rem;
            copy = copy/10;
        }
        
        if(n == sum)
        {
            return true;
        }
        
        return false;
    }
};