class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxiCnt = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
                maxiCnt = max(maxiCnt, count);
            } else {
                count = 0;
            }
        }
        return maxiCnt;
    }
};