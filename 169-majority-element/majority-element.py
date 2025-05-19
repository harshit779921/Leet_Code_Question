class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        c=1
        curr=nums[0]
        if len(nums)==1:
            return curr
        for k in range(1,len(nums)):
            if curr==nums[k]:
                c+=1
            else:
                if c>(len(nums)//2):
                    return curr
                curr=nums[k]
                c=1
        if c>=(len(nums)//2):
                    return curr

        