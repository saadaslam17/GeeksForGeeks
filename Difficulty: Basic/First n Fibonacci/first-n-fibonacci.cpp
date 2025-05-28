// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
    vector<int> ans;

    if (n == 0) return ans;            // empty sequence
    if (n == 1) {                      // only 0
        ans.push_back(0);
        return ans;
    }

    ans.push_back(0);
    ans.push_back(1);

    int fib1 = 0, fib2 = 1;
    for (int i = 2; i < n; i++) {
        int fibNext = fib1 + fib2;
        ans.push_back(fibNext);
        fib1 = fib2;
        fib2 = fibNext;
    }

    return ans;
}

};