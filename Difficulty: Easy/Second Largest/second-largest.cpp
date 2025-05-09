//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = -1;
        int secondLargest = -1;
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > secondLargest && arr[i] < largest)
            {
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends