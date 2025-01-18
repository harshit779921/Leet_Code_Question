class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // using sorting method
        // sort(nums.begin(),nums.end());
        // nums.erase(unique(nums.begin(),nums.end()), nums.end());
        // reverse(nums.begin(),nums.end());
        // if(nums.size()<3) return nums[0];
        // return nums[2];

        // Approach 2: Using Three Variables
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

        for (int num : nums) {
            if (num == first || num == second || num == third) {
                continue; // Skip duplicates
            }

            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (num > second) {
                third = second;
                second = num;
            } else if (num > third) {
                third = num;
            }
        }

        return (third == LONG_MIN) ? first : third;
    }
};
