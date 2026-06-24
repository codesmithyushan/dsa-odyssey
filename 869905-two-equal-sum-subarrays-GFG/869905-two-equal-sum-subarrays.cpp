class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int totalsum = 0;
        for (int i=0; i<arr.size() ; i++){
            totalsum += arr[i];
        }
        int prefixsum = 0;
        for(int i=0; i<arr.size()-1; i++){
            prefixsum += arr[i];
            int equalsum = totalsum - prefixsum;
            if(equalsum == prefixsum) return true;
            else continue;
        }
        return false;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna