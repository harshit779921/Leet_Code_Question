class Solution {
public:
    int findMin(vector<int>& nums) {
        // O(n) solution

        // int n = nums.size();
        // int mini = INT_MAX;
        // for(int i = 0; i<n; i++){
        //     mini = min(mini, nums[i]);
        // }
        // return mini;

        // Most Optimal solution:
        int low = 0, high = nums.size() - 1;
        int ans = INT_MAX;
        while (low <= high) {
            int mid = (low + high) / 2;
            // search space is already sorted
            // then nums[low] will always be
            // the minimum in that search space:
            if (nums[low] <= nums[high]) {
                ans = min(ans, nums[low]);
                break;
            }

            // if left part is sorted:
            if (nums[low] <= nums[mid]) {
                // keep the minimum:
                ans = min(ans, nums[low]);

                // Eliminate left half:
                low = mid + 1;
            } else { // if right part is sorted:

                // keep the minimum:
                ans = min(ans, nums[mid]);

                // Eliminate right half:
                high = mid - 1;
            }
        }
        return ans;
    }
};