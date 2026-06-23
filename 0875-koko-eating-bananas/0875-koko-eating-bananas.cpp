class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 0, end = 0, mid, ans, n =piles.size();
        long long sum = 0;
        for (int i =0; i<n; i++){
            sum = sum + piles[i];
            end = max(end, piles[i]);
        }
        start = sum/h;
        if (start == 0) start ++;
        while (start <= end ){
            mid = (start + end )/2;
            int total_time = 0;
            for (int i =0; i<n; i++){
                total_time = total_time + piles[i]/mid;
                if (piles[i] % mid) 
                    total_time ++;
            }
            if (total_time > h){
                start = mid + 1;
            }
            else {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna