#include<algorithm>
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(), arr.end()); 
        int start = 0; 
        int end = arr.size() -1; 
        while (start<end){
            if (arr[start] + arr[end] == target) {
                return 1;
            }
            else if (arr[start] + arr[end] > target) {
                end -- ;
                
            }
            else if (arr[start] + arr[end] < target){
                start ++;
            }
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna