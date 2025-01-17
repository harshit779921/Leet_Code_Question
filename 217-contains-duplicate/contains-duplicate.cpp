class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Using Hashing
        // unordered_map<int, int> hash;
        // int n = nums.size();
        // for (int i = 0; i<n; i++) {
        //     if (hash[nums[i]] > 0) {
        //         return true;  // Duplicate found
        //     }
        //     hash[nums[i]]++;  // Mark the number as seen
        // }

        // return false;  // No duplicates

        // Sorting
        // sort(nums.begin(), nums.end());

        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         return true;
        //     }
        // }

        // return false;

        // Unordered Set
        unordered_set<int> hash;

        for (int num : nums) {
            if (hash.find(num) != hash.end()) {
                return true; // Duplicate found
            }
            hash.insert(num); // Insert the number
        }

        return false; // No duplicates
    }
};
