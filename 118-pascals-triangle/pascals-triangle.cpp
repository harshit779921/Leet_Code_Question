class Solution {
public:
    vector<int> generateRow(int rowIndex) {
        vector<int> row;
        long long ans = 1; // Starting with the first element as 1
        row.push_back(1);  // First element is always 1
        
        for (int col = 1; col < rowIndex; col++) {
            ans = ans * (rowIndex - col);
            ans = ans / col;
            row.push_back(ans);
        }
        
        return row;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        
        for (int i = 1; i <= numRows; i++) {
            pascalTriangle.push_back(generateRow(i));
        }
        
        return pascalTriangle;
    }
};
