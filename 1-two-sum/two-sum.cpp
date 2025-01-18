class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute force Approach
        // int n = nums.size();
        // for(int i = 0;i<n;i++){
        //     for(int j = i+1; j<n;j++){
        //         if(nums[i]+nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1,-1};

        // Hashing Approach

        map<int,int>mpp;
        for(int i =0; i<nums.size(); i++){
            int a = nums[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end()){
                return {mpp[more],i};
            }
            mpp[a] = i;
        }
        return {-1,-1};
    }
};