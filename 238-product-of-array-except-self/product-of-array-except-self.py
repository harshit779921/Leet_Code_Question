class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        reversed_nums = nums.copy()
        length = len(nums)
        for ltr in range(1, length):
            rtl = length - ltr - 1
            nums[ltr] *= nums[ltr-1]
            reversed_nums[rtl] *= reversed_nums[rtl+1]
        reversed_nums.append(1)
        for index in range(length-1, -1, -1):
            nums[index] = nums[index-1] * reversed_nums[index+1]
        nums[0] = reversed_nums[1]
        return nums