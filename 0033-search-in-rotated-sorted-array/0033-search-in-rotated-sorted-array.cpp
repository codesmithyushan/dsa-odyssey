class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start = 0;
        int n = arr.size();
        int end = n-1;
        int index = -1;
        int mid;

        while(start<=end){
            mid = (start + end)/2;
            if(arr[mid] == target){
                index = mid;
                return index;
            }
            else if (arr[mid]>= arr[0]){
                if(arr[mid]>=target
                &&arr[start]<=target){
                    end = mid -1;
                }
                else{
                    start = mid + 1;
                }
            }
            else if (arr[mid]<arr[0]){
                if(arr[mid]<=target
                &&target<=arr[end]){
                    start = mid + 1;
                }
                else{
                    end = mid -1;
                }
            }
        }return -1;
    } 
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna