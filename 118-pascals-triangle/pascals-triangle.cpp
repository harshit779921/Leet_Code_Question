class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res; // Resultant 2D vector to store Pascal's triangle
        int n = numRows;         // Alias for clarity
        
        if (n == 0) {
            return res; // Return an empty result for 0 rows
        }
        
        // Base case: First row
        res.push_back({1});
        if (n == 1) {
            return res; // If only 1 row, return immediately
        }

        // Base case: Second row
        res.push_back({1, 1});
        
        // Generate rows starting from the 3rd row
        for (int i = 2; i < n; i++) {
            vector<int> temp(i + 1); // Temporary vector for the current row
            
            // Fill the row
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    temp[j] = 1; // First and last elements are always 1
                } else {
                    // Middle elements are the sum of the two elements directly above
                    temp[j] = res[i - 1][j - 1] + res[i - 1][j];
                }
            }
            
            res.push_back(temp); // Add the current row to the result
        }
        
        return res;
    }
};
