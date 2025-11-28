class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        # for i in range(0, len(nums)+1):
        #     if i not in nums:
        #         return i

        freq = {}

        for i in range(0,len(nums)+1):
            freq[i] = 0

        for num in nums:
            freq[num] = 1
        
        for key, value in freq.items():
            if value == 0:
                return key