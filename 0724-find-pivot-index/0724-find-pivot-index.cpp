class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total= 0;
        for(int i =0; i<nums.size(); i++){
            total+=nums[i];
        }
        int leftsum =0;
        int rightsum;
        for(int i =0; i<nums.size(); i++){
            rightsum = total - leftsum - nums[i];
            if(rightsum == leftsum) return i;
            else leftsum+=nums[i];
        }
        return -1;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna