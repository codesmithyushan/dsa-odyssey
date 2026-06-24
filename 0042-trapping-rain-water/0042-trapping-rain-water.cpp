class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;  // collects the total amount of water that can be collected 
        int leftmax =0; // finds the maximum height towards the left sseide of the inex that we are traversing
        int rightmax = 0;  // finds the maximum height towards the right side of the index that we are traversing 
        int maxheight = height[0]; //finds the maximum height in the entire array
        int index =0;


        // finding maxheight buidling 
        for (int i =0; i<n; i++){
            if(maxheight < height[i]){
                maxheight = height[i];
                index = i;
            }
        }

        //traversing the left part of the max height building 

        for(int i =0; i<index; i++){
            if(leftmax > height[i])
            water = leftmax - height[i] + water;
            else 
            leftmax = height[i];
        }

        //traversing the right part of the max height building 

        for(int i = n-1; i>index; i--){
            if(rightmax > height[i]){
                water += rightmax - height[i];
            }
            else {
                rightmax = height[i];
            }
        }
        return water; 

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna