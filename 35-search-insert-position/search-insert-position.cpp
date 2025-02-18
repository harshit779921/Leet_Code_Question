class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // Using STL library
        return lower_bound(nums.begin(),nums.end(), target) - nums.begin();

        // int n = nums.size();
        // int low = 0, high =n-1;

        // while(low <= high){
        //     int mid = (low+high)/2;

        // }
    }
};