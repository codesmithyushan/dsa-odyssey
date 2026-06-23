class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        int mid; 
        int first = nums[0];
        int Ans = first;

        while(start<=end){
            mid = (start+end)/2;
            if(nums[mid]>=first){
                start = mid + 1;
            }
            else if(nums[mid]<first){
                Ans = nums[mid];
                end = mid -1;
            }

        }
        return Ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna