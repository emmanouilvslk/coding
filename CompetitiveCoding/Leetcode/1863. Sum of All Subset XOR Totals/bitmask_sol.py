class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        totalSubsets = 1 << len(nums)
        sum = 0

        for mask in range(totalSubsets):
            totalXOR = 0

            for i in range(len(nums)):
                if mask & (1 << i):
                    totalXOR ^= nums[i]
            
            sum += totalXOR
        return sum
