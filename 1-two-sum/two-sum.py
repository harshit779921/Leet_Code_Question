class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Brute
        # for i in range(0, len(nums)-1):
        #     for j in range(i+1, len(nums)):
        #         if nums[i]+nums[j] == target:
        #             return [i,j]

        # Optimal Solution
        num_map = {}  # Hash table to store number and its index
        for i, num in enumerate(nums):
            complement = target - num  # Find the complement
            if complement in num_map:
                return [num_map[complement], i]  # Return indices of complement and current number
            num_map[num] = i  # Store the number with its index
