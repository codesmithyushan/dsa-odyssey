class Solution {
  public:
    bool hasTripletSum(vector<int> &nums, int target) {
        // Code Here
         int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            int ans = target- nums[i];
            int start = i + 1; 
            int end = n-1;

            while(start<end){
                if(nums[start] + nums[end] == ans){
                    return true;
                }
                else if (nums[start] + nums[end] > ans){
                    end -- ;
                }
                else if (nums[start] + nums[end] < ans){
                    start ++; 
                }

                
            }
        } return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna