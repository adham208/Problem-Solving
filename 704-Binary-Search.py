class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low,high = 0,len(nums)-1

        while(low<=high):
            mid = (low+high)//2
            if nums[mid]>target:
                high = mid-1
            elif nums[mid]==target:
                return mid
            else:
                low = mid+1
        
        return -1