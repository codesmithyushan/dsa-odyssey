class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int index = 0;
    if(nums.size()==0)
    return 0;
    for (int i =1; i <nums.size(); i++)
    {
        if(nums[i] == nums[i-1])
        continue ;
        
        else {
            index = index + 1;
            nums[index] = nums[i];
        }
    }
    return index + 1 ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna