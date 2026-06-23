class Solution {
  public:
    int minTime(vector<int> &arr, int k) {
        // code here
        int N =arr.size();
        if(k>N) return -1;
        int start =0, end =0, mid, ans;
        for(int i =0; i<N; i++){
            start = max(start, arr[i]); // gives the max element in the array
            end = end + arr[i]; // gives the sum of all element in the arra
        }
        while(start<=end){
            mid =(start + end) /2;
            int pages = 0;
            int count =1;
            for (int i =0; i<N; i++){
                pages = pages + arr[i];
                if(pages> mid){
                    count ++;
                    pages = arr[i];
                }
            }
            if(count <= k){
                ans =mid;
                end = mid-1;}
            else start = mid + 1;
            
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna