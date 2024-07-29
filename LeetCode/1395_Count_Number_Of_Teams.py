class Solution:
    def numTeams(self, rating: List[int]) -> int:
        result = 0
        for mid in range(1, len(rating) - 1):
            left_smaller = right_greater = 0
            for i in range(mid):
                if rating[i] < rating[mid]:
                    left_smaller += 1
            for i in range(mid + 1, len(rating)):
                if rating[i] > rating[mid]:
                    right_greater += 1
            result += left_smaller * right_greater
            left_greater = mid - left_smaller
            right_smaller = len(rating) - mid - 1 - right_greater
            result += left_greater * right_smaller
        return result
