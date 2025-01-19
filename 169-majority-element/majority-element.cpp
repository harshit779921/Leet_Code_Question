class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // using hashing
        // unordered_map<int, int> mpp;
        // for (int i = 0; i < nums.size(); i++) {
        //     mpp[nums[i]]++;
        // }

        // for (auto it : mpp) {
        //     if (it.second > (nums.size() / 2)) {
        //         return it.first;
        //     }
        // }
        // return -1;

        // Moore's Voting Algorithm
        int el, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                el = nums[i];
                cnt = 1;
            }

            else if (nums[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }

        cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el) {
                cnt++;
            }
        }
        if (cnt > nums.size() / 2) {
            return el;
        }
        return -1;
    }
};