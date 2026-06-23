class Solution {
public:
    int mySqrt(int x) {
        if (x==0 ){
            return 0;
            
        }
        else{
        int start = 1;
        int end = x;
        int mid;
        
        
        while (start<= end){
            mid = start + (end - start)/2;
            if (mid == x/mid)
            {
                return mid;
            }
            else if (mid>x/mid){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return end;

    }  }  
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna