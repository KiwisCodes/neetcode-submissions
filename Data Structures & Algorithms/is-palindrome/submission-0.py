class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        newString = ' '.join([char for char in s if char.isalpha()])

        for i in range (0, int(len(newString)/2 + 1)):
            if (newString[i] != newString[len(newString)-i-1]):
                return False
        return True

        