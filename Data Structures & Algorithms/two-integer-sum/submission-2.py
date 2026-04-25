class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indicesDic = {}
        for i in range (0, len(nums)):
            indicesDic[nums[i]] = i
        ans = []
        for i in range (0, len(nums)):
            if(target - nums[i] in indicesDic):
                if(i < indicesDic[target - nums[i]]):
                    ans.append(i)
                    ans.append(indicesDic[target-nums[i]])
                elif(i > indicesDic[target - nums[i]]):
                    ans.append(indicesDic[target-nums[i]])
                    ans.append(i)
                return ans

                