class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic={}
        for index,num in enumerate(nums):
            remaining = target - num
            if remaining in dic :
                return [dic[remaining],index]
            dic[num]=index