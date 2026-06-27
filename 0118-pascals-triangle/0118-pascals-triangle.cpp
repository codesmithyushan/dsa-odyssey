class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=0; i<numRows; i++){
            vector<int> rows(i+1);
            for(int j=0; j<=i; j++){
                if(j==0 || j==i) rows[j] = 1;
                else{
                    rows[j] = result[i-1][j-1] + result[i-1][j];
                }
                
            }
            result.push_back(rows);
        }return result;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna