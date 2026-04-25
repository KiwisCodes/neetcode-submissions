class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        myDict = {}
        ans = []
        idx = 0
        for string in strs:
            sortedString = ''.join(sorted(string))
            if(sortedString not in myDict):
                myDict[sortedString] = idx
                ans.append([string])
                idx += 1
            else:
                ans[myDict[sortedString]].append(string)
        return ans

            

        
        