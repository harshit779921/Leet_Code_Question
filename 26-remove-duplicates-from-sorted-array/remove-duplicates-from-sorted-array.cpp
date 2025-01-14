class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Brute Froce
        // Using set
        // int n = nums.size();
        // set<int> st;
        // for(int i =0; i<n; i++){
        //     st.insert(nums[i]);
        // }
        // int k = st.size();
        // int j = 0;
        // for(int x : st){
        //     nums[j++] = x;
        // }
        // return k;

        // Optimal Approach
        // 2-Pointer Approach
        int i = 0;
        int n = nums.size();
        for (int j = 1; j < n; j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};