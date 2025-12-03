class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)
        pos_idx = 0
        neg_idx = 1

        for i in range(0, len(nums)):
            if nums[i] >= 0:
                result[pos_idx] = nums[i]
                pos_idx += 2
            else :
                result[neg_idx] = nums[i]
                neg_idx += 2
        
        return result
