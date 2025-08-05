class Solution:
	def isPalinSent(self, s):
	    cleaned = ""
        for char in s:
            if char.isalnum():              # keep only letters and digits
                cleaned += char.lower()     # convert to lowercase
        
        return cleaned == cleaned[::-1] 