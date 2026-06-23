class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int start =1, end, mid, ans , size = stalls.size();
        sort (stalls.begin(), stalls.end());
        end = stalls[size-1] - stalls[0];
        
        while(start<=end){
            mid = (start + end )/2;
            int count = 1; 
            int position = stalls[0];
            for (int i =1; i<size; i++){
                if(position + mid  <= stalls[i]){
                    count ++ ; 
                    position = stalls[i]; 
                }
            }
            if (count < k) end = mid -1;
            else {
                ans = mid;
                start = mid + 1;
            }
            
        }
        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna