class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        
        noDups = set()

        for num in nums:
            if num in noDups:
                return True
            noDups.add(num)


        return False