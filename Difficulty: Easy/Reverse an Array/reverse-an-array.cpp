class Solution {
  public:
  
  void reverse(int n, vector<int> &arr, int i)
  {
      if(i == n/2) return;
      
      reverse(n, arr, i+1);
      
      swap(arr[i], arr[n-i-1]);
  }
  
  
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        int i = 0;
        
        reverse(n, arr, i);
        
        
        
    }
};