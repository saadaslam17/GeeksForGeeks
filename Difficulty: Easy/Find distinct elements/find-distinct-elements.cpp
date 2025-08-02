// User function Template for C++
int distinct(vector<int>& arr) {
    // Your code here
    int count = 0;
    map<int,int> freq;
    
    for(auto it : arr)
    {
        freq[it]++;
    }
    
    for(auto it : freq)
    {
        count++;
    }
    
    return count;
}