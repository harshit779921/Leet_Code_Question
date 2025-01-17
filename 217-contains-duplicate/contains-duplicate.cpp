class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        int n = nums.size();
        for (int i = 0; i<n; i++) {
            if (hash[nums[i]] > 0) {
                return true;  // Duplicate found
            }
            hash[nums[i]]++;  // Mark the number as seen
        }

        return false;  // No duplicates
    }
};
