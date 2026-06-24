#include<algorithm>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       long long maxim = INT_MIN;
        long long prefix = 0;
       for (int i =0; i<nums.size(); i++){
        prefix += nums[i];
        maxim = max(prefix, maxim);
        if(prefix<0) prefix =0;
       }
       return maxim;
    }
     
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna