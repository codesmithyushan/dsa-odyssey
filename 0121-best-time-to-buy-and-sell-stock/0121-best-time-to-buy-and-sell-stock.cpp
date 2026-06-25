class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minPrice = INT_MAX;
        int maxProfit =0;

        for(int i =0; i<arr.size(); i++){
            minPrice = min(minPrice, arr[i]);
            maxProfit = max(maxProfit, arr[i] - minPrice);
        }
        
        return maxProfit; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna