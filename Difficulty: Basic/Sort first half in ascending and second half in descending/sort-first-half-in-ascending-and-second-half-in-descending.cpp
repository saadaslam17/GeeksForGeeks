class Solution {
  public:
    // Function to sort the array in a custom pattern.
    vector<int> customSort(vector<int>& arr) {
        // your code
    int n = arr.size();
    int mid = n / 2;

    // Sort first half in ascending
    sort(arr.begin(), arr.begin() + mid);

    // Sort second half in descending
    sort(arr.begin() + mid, arr.end(), greater<int>());

    return arr;
    }
};