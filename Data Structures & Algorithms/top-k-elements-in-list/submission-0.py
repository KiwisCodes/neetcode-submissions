class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for num in nums:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        freq = dict(sorted(freq.items(), key=lambda item: item[1]))

        ans = []

        for key, value in reversed(freq.items()):
            if k==0: break
            ans.append(key)
            k -= 1
        return ans
        
        