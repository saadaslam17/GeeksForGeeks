class Solution {
  public:
  
  void bubblePass(vector<int> &arr, int i, int n)
{
  if(i == n-1) return;
  
  if(arr[i] > arr[i+1])
  {
    swap(arr[i], arr[i+1]);
  }
  
  bubblePass(arr, i+1, n);
}

void bubbleSort(vector<int> &arr, int i, int n)
{
  if(n == 1) return;
  
  bubblePass(arr, i, n);
  bubbleSort(arr, i, n-1);
}
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        int i = 0;
        bubbleSort(arr, i, n);
    }
};