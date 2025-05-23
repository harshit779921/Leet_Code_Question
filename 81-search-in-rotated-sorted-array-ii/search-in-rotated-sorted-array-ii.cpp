class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // Linear Search Method
        // int n = nums.size();
        // for(int i =0; i<n; i++){
        //     if(nums[i]== target){
        //         return true;
        //     }
        // }
        // return false;

        // Binary Search Method
        int n = nums.size(); // size of the array.
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;

            // if mid points the target
            if (nums[mid] == target)
                return true;

            // Edge case:
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low = low + 1;
                high = high - 1;
                continue;
            }

            // if left part is sorted:
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    // element exists:
                    high = mid - 1;
                } else {
                    // element does not exist:
                    low = mid + 1;
                }
            } else { // if right part is sorted:
                if (nums[mid] <= target && target <= nums[high]) {
                    // element exists:
                    low = mid + 1;
                } else {
                    // element does not exist:
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};