// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        
    string plain = "", rev = "";

    while (n > 0) {
        char ch = (n % 10) + '0';
        plain += ch;
        rev = ch + rev;
        n /= 10;
    }

    return plain == rev;
}

};