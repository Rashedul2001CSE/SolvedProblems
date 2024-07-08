class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        def getAns(n, k):
            if n == 1:
                return 0
            return (getAns(n - 1, k) + k) % n

        return getAns(n, k) + 1
