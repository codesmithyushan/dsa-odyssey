class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i =0; i<n-3; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j =i+1; j<n-2; j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int start = j+1;
                int end = n-1;
                long long ans = (long long) target - nums[i] - nums[j];
                while(start<end){
                    long long sum = (long long) nums[start] + nums[end];
                    if(sum == ans){
                        result.push_back({
                            nums[i],
                            nums[j],
                            nums[start],
                            nums[end]
                        });
                        start ++;
                        end --;
                        while(start<end && nums[start] == nums[start-1]) start++;
                        while(start<end && nums[end] == nums[end+1]) end--;

                    }
                    else if(sum>ans) end --;
                    else if (sum<ans) start ++;
                    
                    
                }
                
                
                
            }
            
        } return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna