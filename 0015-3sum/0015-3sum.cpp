class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i =0; i<n-2; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int start = i + 1;
            int end = n-1;
            int ans = 0-nums[i];

            while(start<end){
                if(nums[start] + nums[end] == ans){
                    result.push_back({
                        nums[i],
                        nums[start],
                        nums[end]
                    });
                    start ++ ;
                    end --; 
                    while(start<end && nums[start] == nums[start-1]) start++;
                    while(start<end && nums[end] == nums[end+1]) end--;

                }
                else if (nums[start] + nums[end] > ans) end --;
                else if (nums[start] + nums[end] < ans) start ++ ;
            }
        }
        return result;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna