class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        p1,p2,p3,p4=0,0,len(nums)-1,len(nums)-1
        ans = [0]*len(nums)
        for i in range(len(nums)):
            if nums[p2] < pivot:
                ans[p1] = nums[p2]
                p1 += 1
            if nums[p3] > pivot:
                ans[p4] = nums[p3]
                p4 -= 1
            p2 +=1
            p3 -= 1
        while p1 <= p4:
            ans[p1] = ans[p4] =  pivot
            p1,p4=p1+1,p4-1

        return ans
