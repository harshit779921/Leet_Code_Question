class Solution(object):
    # Using STL
    # def merge(self, nums1, m, nums2, n):
    #   for j in range(n):
    #       nums1[m+j] = nums2[j]
    #   nums1.sort()

# Using Two Pointer Approach
    def merge(self, nums1, m, nums2, n):
        i = m - 1
        j = n - 1
        k = m + n - 1
        
        while j >= 0:
            if i >= 0 and nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
            k -= 1