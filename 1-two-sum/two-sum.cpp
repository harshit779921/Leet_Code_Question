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

        unordered_map<int,int>mpp;
        for(int i =0; i<nums.size(); i++){
            int more = target - nums[i];
            if(mpp.find(more) != mpp.end()){
                return {mpp[more],i};
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};

        // Optimal Approach 

        // int i =0;
        // int j = nums.size()-1;
        // sort(nums.begin(),nums.end());

    }
};