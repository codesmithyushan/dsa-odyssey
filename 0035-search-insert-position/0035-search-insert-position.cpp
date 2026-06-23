class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0; 
        int n = nums.size();
        int end = n-1 ; 
        int mid ;
        int index = n; 

        while (start<=end){
            mid = (start+end)/2;
            if(nums[mid] == target){
                index = mid;
                return index;
            }
            else if (nums[mid]< target){
                start = mid  +1;
            }
            else if (nums[mid] > target ){
                index = mid; 
                end = mid - 1;
            }

        }
        return index; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna