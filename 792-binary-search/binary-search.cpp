class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Iterative Code
        int n = nums.size();
        int low = 0 , high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]== target)
                return mid;
            else if(target > nums[mid])
                low = mid+1;
            else 
                high = mid-1;
        }
        return -1;

        // Recursive Code
        // int low , high ;
        // if (low>high)
        //     return -1;

        // int mid = (low+high)/2;

        // if(nums[mid] == target)
        //     return mid;
        // else if(target>nums[mid])
        //     return search(nums,mid+1,high,target);
        // return search(nums,low,mid-1,target);
    }
};