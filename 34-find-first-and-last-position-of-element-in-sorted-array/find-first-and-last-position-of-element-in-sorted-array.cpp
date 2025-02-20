class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    //  Using the Concept of Upper and Lower Bound

    //     int n=nums.size();
    //     int lb=lowerBound(nums,n,target);
    //     if(lb==n || nums[lb]!=target)return{-1,-1};
    //     return {lb, upperBound(nums,n,target)-1};
    // }

    // int lowerBound(vector<int>&nums, int n, int x){
    //     int low=0, high=n-1;
    //     int ans=n;
    //     while(low<=high){
    //         int mid=low+(high-low)/2;
    //         if(nums[mid]>=x){
    //             ans=mid;
    //             high=mid-1;
    //         }
    //         else{
    //             low=mid+1;
    //         }
    //     }
    //     return ans;
    // }

    // int upperBound(vector<int>&nums, int n, int x){
    //     int low=0, high=n-1;
    //     int ans=n;
    //     while(low<=high){
    //         int mid=low+(high-low)/2;
    //         if(nums[mid]>x){
    //             ans=mid;
    //             high=mid-1;
    //         }
    //         else{
    //             low=mid+1;
    //         }
    //     }
    //     return ans;

     int n = nums.size(); // Get the size of the array
        int low = 0, high = n - 1; // Initialize search boundaries
        int last_pos = -1;  // Variable to store the last occurrence index of target
        int first_pos = -1; // Variable to store the first occurrence index of target

        // Binary search to find the last occurrence of the target
        while(low <= high)
        {
            int mid = low + (high - low) / 2; // Calculate the middle index

            if(nums[mid] == target)
            {
                last_pos = mid;  // Update last position
                low = mid + 1;   // Move right to find the last occurrence
            }
            else if(nums[mid] < target) 
                low = mid + 1; // Search in the right half
            else 
                high = mid - 1; // Search in the left half
        }    

        // Reset search boundaries for finding the first occurrence
        low = 0;
        high = n - 1;

        // Binary search to find the first occurrence of the target
        while(low <= high)
        {
            int mid = low + (high - low) / 2; // Calculate the middle index

            if(nums[mid] == target)
            {
                first_pos = mid;  // Update first position
                high = mid - 1;   // Move left to find the first occurrence
            }
            else if(nums[mid] < target) 
                low = mid + 1; // Search in the right half
            else 
                high = mid - 1; // Search in the left half
        }  

        // Return the first and last position of the target in the array
        return {first_pos, last_pos};
    }
};