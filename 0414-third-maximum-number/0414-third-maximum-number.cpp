class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int distinctCount =1;
        int largest = nums[nums.size() -1];

        for(int i =nums.size()-2; i>=0; i--){
            if (nums[i] != nums[i+1]){
                distinctCount++; 

                if (distinctCount == 3) return nums[i];
                else continue ;
            }

        }
        return largest; 
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna