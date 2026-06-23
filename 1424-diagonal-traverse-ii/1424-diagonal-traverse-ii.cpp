#include <vector>

class Solution {
public:
    std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& nums) {
        std::vector<std::vector<int>> diagonals;
        
        // Iterate through the matrix from bottom row to top row
        // This naturally orders elements from bottom-left to top-right
        for (int row = nums.size() - 1; row >= 0; --row) {
            for (int col = 0; col < nums[row].size(); ++col) {
                int diagonal_idx = row + col;
                
                // Expand our 2D vector if we find a new diagonal index
                if (diagonal_idx >= diagonals.size()) {
                    diagonals.resize(diagonal_idx + 1);
                }
                
                // Add the element to its corresponding diagonal group
                diagonals[diagonal_idx].push_back(nums[row][col]);
            }
        }
        
        std::vector<int> result;
        
        // Flatten the grouped diagonals into our final 1D result array
        for (const auto& diagonal : diagonals) {
            for (int num : diagonal) {
                result.push_back(num);
            }
        }
        
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna