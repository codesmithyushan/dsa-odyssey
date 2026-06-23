class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 1;
        int end = n-2;
        int PeakIndex = -1;
        int mid;

        while(start<=end){
            mid = (start+(end-start)/2);
            if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
                PeakIndex = mid;
                return PeakIndex;
            }
            else if (arr[mid]>=arr[mid-1]){
                start = mid+1;

            }
            else if (arr[mid]<=arr[mid-1]){
                end = mid-1;
            }

        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna