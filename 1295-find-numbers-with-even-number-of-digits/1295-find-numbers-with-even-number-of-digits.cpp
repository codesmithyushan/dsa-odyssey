class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenDigitCount=0;
        for(int i=0;i<nums.size();i++){int digits=0;
                                       int number = nums[i];
                                       while(number>0){
                                           digits++;
                                           number= number/10;
                                       }
                                       if(digits%2==0){
                                           evenDigitCount++;
                                       }
            
        }
        return evenDigitCount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna