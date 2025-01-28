class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        unordered_map<int, int> mpp;
        int n = nums.size();
        int mm = (int)(n / 3) + 1;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
            if (mpp[nums[i]] == mm) {
                ls.push_back(nums[i]);
            }
        }
        sort(ls.begin(), ls.end());
        return ls;
    }
};