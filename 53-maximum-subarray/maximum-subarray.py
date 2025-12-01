class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        # Optimal
        
        # maxi = float("-inf")

        # for i in range(0, len(nums)):
        #     total = 0
        #     for j in range(i, len(nums)):
        #         total = total + nums[j]
        #         maxi = max(maxi, total)
        
        # return maxi

        maxi = float("-inf")
        total = 0

        for i in range(0, len(nums)):
            total = total + nums[i]
            maxi = max(maxi, total)

            if total < 0:
                total = 0

        return maxi

