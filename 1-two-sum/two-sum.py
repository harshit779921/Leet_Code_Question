class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Brute
        # for i in range(0, len(nums)-1):
        #     for j in range(i+1, len(nums)):
        #         if nums[i]+nums[j] == target:
        #             return [i,j]

        # Optimal Solution
        num_map = {}  # Hash table to store number and its index
        for i in range(0, len(nums)):
            remaining = target - nums[i]  # Find the remaining
            if remaining in num_map:
                return [num_map[remaining], i] 
            num_map[nums[i]] = i  
