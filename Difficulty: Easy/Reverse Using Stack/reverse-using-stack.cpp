//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string reverse(const string& str) {
        // code here
        int n = str.size();
        
        stack<char> st;
        
        for(int i = 0; i < n; i++)
        {
            st.push(str[i]);
        }
        
        string rev = str;
        
        for(int i = 0; i < n; i++)
        {
            rev[i] = st.top();
            st.pop();
        }
        return rev;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        Solution sol;
        string input;
        getline(cin, input);
        string reversed = sol.reverse(input);
        cout << reversed << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends