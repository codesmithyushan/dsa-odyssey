class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int NumberTocheck = nums[0];
        int max = 1;
        int maxOcc = NumberTocheck;
        int Index =1;
        int count = 1;

        while(Index<nums.size()){
            if(NumberTocheck == nums[Index]){
                count++;
                
                Index++;
                if(count>max){
                    max = count;
                    maxOcc = NumberTocheck;
                }
            }
            else if (NumberTocheck != nums[Index]){
                NumberTocheck = nums[Index];
                
                count = 1;
                Index++;
            }

        }
        return maxOcc; 
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna