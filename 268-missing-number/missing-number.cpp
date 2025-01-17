class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Using Hashing
        // int n = nums.size();
        // vector<int>hash(n+1,0);
        // for(int i =0; i<n; i++){
        //     hash[nums[i]]= 1;
        // }
        // // covers the entire loop
        // for(int i =0;i<=n;i++){
        //     if(hash[i] == 0){
        //         return i;
        //     }
        // }
        // return -1;

        // Using sum method
        int n = nums.size();
        int sum = n*(n+1)/2;
        int s1 = 0;
        for(int i = 0; i<n; i++){
            s1 += nums[i];
        }
        return sum - s1;
    }
};