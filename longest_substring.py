class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        highest_len = 0
        
        for j in range(len(s)):
            current_len = 0
            n = set()
            
            for i in range(j, len(s)):
                if s[i] in n:
                    break
                else:
                    n.add(s[i])
                    current_len += 1
                    
                if current_len > highest_len:
                    highest_len = current_len
                    
        
        return highest_len
