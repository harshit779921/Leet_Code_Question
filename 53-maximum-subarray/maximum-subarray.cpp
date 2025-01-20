class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum = 0;
        int maxi = INT_MIN;
        
        for (int num : nums) {
            current_sum = max(num, current_sum + num);  // Take the current number or add to the previous sum
            maxi = max(maxi, current_sum);  // Update the maximum sum
        }
        
        return maxi;
    }
};
