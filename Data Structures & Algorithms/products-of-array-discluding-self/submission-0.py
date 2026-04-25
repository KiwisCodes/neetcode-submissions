class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        productFromLeft = [1]*len(nums)
        productFromLeft[0] = nums[0]
        for i in range (1, len(nums)):
            productFromLeft[i] *= productFromLeft[i-1]*nums[i]

        productFromRight = [1]*len(nums)
        productFromRight[len(nums)-1] = nums[len(nums)-1]
        for i in range (len(nums)-2, -1, -1):
            productFromRight[i] *= productFromRight[i+1]*nums[i]
        ans = [1] * len(nums)

        for i in range (0, len(nums)):
            if(i==0): ans[i] *= productFromRight[i+1]
            elif(i==len(nums)-1): ans[i] *= productFromLeft[i-1]
            else: ans[i] *= productFromLeft[i-1]*productFromRight[i+1]
        return ans