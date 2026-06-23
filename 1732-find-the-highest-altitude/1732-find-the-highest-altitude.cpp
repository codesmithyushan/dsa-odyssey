class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude;
        altitude.push_back(0);
        int creak = 0;
        for(int i =0; i<gain.size(); i++){
            creak = creak + gain[i];
            altitude.push_back(creak);
        }
        int peak = altitude[0];
        for(int i=0; i<altitude.size(); i++){
            if(peak < altitude[i]){
                peak = altitude[i];
            }
            else continue;
        }
         
         return peak;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna