class Solution {
  public:
    int priority(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

string infixToPostfix(string& s) {
    string ans = "";
    stack<char> st;
    int n = s.size();
    int i = 0;
    
    while (i < n) {
        char ch = s[i];
        
        // Operand
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            ans += ch;
        }

        // Opening bracket
        else if (ch == '(') {
            st.push(ch);
        }

        // Closing bracket
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // Pop the '('
        }

        // Operator
        else {
            while (!st.empty() && priority(ch) <= priority(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }

        i++;
    }

    // Pop any remaining operators
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}
};
