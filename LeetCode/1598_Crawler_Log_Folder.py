class Solution:
    def minOperations(self, logs: List[str]) -> int:
        cnt = 0
        for st in logs:
            if st == "./":
                continue
            elif st == "../":
                cnt = max(0, cnt - 1)
            else:
                cnt += 1
        return cnt
