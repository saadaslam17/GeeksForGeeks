// User function Template for C++
class Solution {
  public:
  
  int solve(int n)
  {
      if(n == 1) return 1;
      if(n == 0) return 0;
      
      int ans = solve(n-1) + solve(n-2);
      return ans;
  }
  
    int nthFibonacci(int n) {
        // code here
        return solve(n);
    }
};