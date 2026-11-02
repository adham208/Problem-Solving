class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s) != len(t):
            return False

        map1 = {}
        map2 = {}
        for char in range(len(s)):
            map1[s[char]] = 1+map1.get(s[char],0)
            map2[t[char]] = 1+ map2.get(t[char],0)

        return map1 == map2

