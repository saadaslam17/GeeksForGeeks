class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        if(arr.size() == 1 && arr[0] == 1) return 2;
        else if(arr.size() == 1 && arr[0] == 2) return 1;
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i <= arr.size(); i++)
        {
            if(arr[i] != i+1) return i+1;
        }
        
        return arr.size() + 1;
    }
};