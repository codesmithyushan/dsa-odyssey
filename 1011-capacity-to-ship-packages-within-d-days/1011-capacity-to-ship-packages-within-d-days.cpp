class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int size = weights.size();
       
        int start = 0; 
        int end = 0;
        int mid, ans =-1;
        for(int i =0; i<size; i++){
            start = max(start, weights[i]);
            end = end + weights[i];
        }
        while (start<=end){
            mid = (start + end) /2;
            int load =0, count =1;
            for(int i =0; i<size; i++){
                load = load + weights[i];
                if(load > mid){
                    count ++ ;
                    load = weights[i];
                }

            }
            if(count <= days){
                ans = mid;
                end = mid -1; 
            }
            else start = mid + 1;
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna