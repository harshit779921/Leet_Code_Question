class Solution {
public:
    void sortColors(vector<int>& nums) {
        // It is method using built-in-Function
        // sort(nums.begin(),nums.end());
        
        // Dutch National flag Algorithm
        int low =0, mid = 0, high = nums.size()-1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};