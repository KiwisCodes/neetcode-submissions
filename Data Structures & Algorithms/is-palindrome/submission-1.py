class Solution:
    def isPalindrome(self, s: str) -> bool:
        # Convert to lowercase and filter out non-alphabetic characters
        s = s.lower()  # Assign back to s
        newString = ''.join([char for char in s if char.isalnum()])  # alnum to include numbers as well
        
        # Check if the string is a palindrome
        for i in range(0, len(newString) // 2):  # Loop only half the string
            if newString[i] != newString[len(newString) - i - 1]:
                return False
        return True