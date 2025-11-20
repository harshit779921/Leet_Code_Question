class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # dict = {}

        # for i in nums:
        #     if i in dict:
        #         dict[i] += 1
        #     else:
        #         dict[i] = 1

        # k = 0
        # for key in dict.keys():
        #     nums[k] = key
        #     k += 1
        # return k

        i = 1
        for j in range(1, len(nums)):
            if nums[j] != nums[j - 1]:
                nums[i] = nums[j]
                i += 1
        return i