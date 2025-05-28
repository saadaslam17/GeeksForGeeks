// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        
        int min = INT_MAX;
        int max = INT_MIN;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
            
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        pair<int,int> ans = {min, max};
        
        return ans;
    }
};